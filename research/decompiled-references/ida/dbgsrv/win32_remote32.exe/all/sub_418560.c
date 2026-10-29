/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_418560
// Address: 0x00418560

//----- (00418560) --------------------------------------------------------
int __userpurge sub_418560@<eax>(__m128i a1@<xmm0>, int a2, unsigned int a3, unsigned int a4, int a5)
{
  _DWORD *v5; // edi
  const void *v6; // esi
  char v8; // al
  int v9; // ecx
  int v10; // edx
  bool v11; // zf
  unsigned int v12; // eax
  int v13; // eax
  bool v14; // cf
  char *v15; // eax
  int v16; // ecx
  unsigned int v17; // edx
  _DWORD *v18; // [esp-Ch] [ebp-68h]
  int v19; // [esp-8h] [ebp-64h]
  int v20; // [esp-8h] [ebp-64h]
  double v21; // [esp-4h] [ebp-60h]
  int v22; // [esp-4h] [ebp-60h]
  struct _MEMORY_BASIC_INFORMATION Buffer; // [esp+Ch] [ebp-50h] BYREF
  unsigned int v24; // [esp+28h] [ebp-34h]
  int v25; // [esp+2Ch] [ebp-30h]
  int v26; // [esp+30h] [ebp-2Ch]
  int v27; // [esp+34h] [ebp-28h]
  _DWORD *v28; // [esp+38h] [ebp-24h]
  DWORD Protect; // [esp+3Ch] [ebp-20h] BYREF
  unsigned int v30; // [esp+40h] [ebp-1Ch]
  _DWORD *v31; // [esp+44h] [ebp-18h]
  int v32; // [esp+48h] [ebp-14h]
  int v33; // [esp+4Ch] [ebp-10h] BYREF
  int v34; // [esp+58h] [ebp-4h]

  v5 = (_DWORD *)a2;
  v28 = (_DWORD *)a2;
  sub_43CF50((_DWORD *)a2, &v33, a4, a5);
  v27 = a2 + 248;
  if ( v33 != *(_DWORD *)(a2 + 248) )
    return 0;
  v6 = (const void *)(a4 & -(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 244))(a2));
  if ( !VirtualQueryEx(*(HANDLE *)(a2 + 452), v6, &Buffer, 0x1Cu) )
  {
    sub_43C950(a1, a2, (int)"VirtualQueryEx");
    return 0;
  }
  if ( (Buffer.State & 0x10000) != 0 )
  {
    LODWORD(v21) = v6;
    sub_43C950(a1, a2, (int)"%a: the page has not been allocated", v21);
    return 0;
  }
  else if ( Buffer.Protect )
  {
    v22 = *(_DWORD *)(a2 + 452);
    v19 = *(_DWORD *)(a2 + 456);
    Protect = Buffer.Protect;
    v30 = (a5 + 4095 + a4 - (_DWORD)v6) & 0xFFFFF000;
    v8 = sub_419450(&Protect, a3, v19, v22);
    v9 = *(_DWORD *)(a2 + 248);
    v10 = a2 + 248;
    v25 = v9;
    v11 = v8 == 0;
    v32 = 0;
    v12 = 0;
    if ( !v11 )
      v12 = v30;
    v24 = v12;
    v13 = *(_DWORD *)(v9 + 4);
    v31 = (_DWORD *)v13;
    if ( !*(_BYTE *)(v13 + 13) )
    {
      do
      {
        v31 = (_DWORD *)v13;
        v14 = *(_DWORD *)(v13 + 16) < (unsigned int)v6;
        if ( *(_DWORD *)(v13 + 16) >= (unsigned int)v6 )
        {
          v9 = v13;
          v13 = *(_DWORD *)v13;
        }
        else
        {
          v13 = *(_DWORD *)(v13 + 8);
        }
        v11 = *(_BYTE *)(v13 + 13) == 0;
        v32 = 1 - v14;
      }
      while ( v11 );
      v5 = v28;
      v10 = v27;
    }
    if ( *(_BYTE *)(v9 + 13) || (unsigned int)v6 < *(_DWORD *)(v9 + 16) )
    {
      if ( *(_DWORD *)(v10 + 4) == 82595524 )
        sub_403E20();
      v26 = v10;
      v34 = 0;
      v27 = 0;
      v15 = (char *)sub_4627C2(0x34u);
      v16 = v25;
      v34 = -1;
      *(_OWORD *)(v15 + 20) = 0;
      *((_DWORD *)v15 + 4) = v6;
      *(_OWORD *)(v15 + 36) = 0;
      v20 = v32;
      *(_DWORD *)v15 = v16;
      v18 = v31;
      *((_DWORD *)v15 + 1) = v16;
      *((_DWORD *)v15 + 2) = v16;
      *((_WORD *)v15 + 6) = 0;
      v9 = sub_403C10(v5 + 62, v18, v20, (int)v15);
    }
    v17 = v24;
    v33 = v9;
    *(_DWORD *)(v9 + 20) = a4;
    *(_DWORD *)(v9 + 28) = a5;
    *(_DWORD *)(v9 + 32) = v30;
    *(_DWORD *)(v9 + 44) = Protect;
    *(_DWORD *)(v9 + 24) = v6;
    *(_DWORD *)(v9 + 36) = v17;
    *(_DWORD *)(v9 + 40) = 0;
    *(_DWORD *)(v9 + 48) = a3;
    if ( v17 )
    {
      return (*(unsigned __int8 (__stdcall **)(_DWORD *, int, int))(*v5 + 168))(v5, v33, 1) != 0 ? 2 : 0;
    }
    else
    {
      *(_DWORD *)(v9 + 40) = Buffer.Protect;
      return 2;
    }
  }
  else
  {
    LODWORD(v21) = v6;
    sub_43C950(a1, a2, (int)"%a: the page cannot be accessed", v21);
    return 0;
  }
}
// 41860B: variable 'v21' is possibly undefined
