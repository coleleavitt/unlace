/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_407C10
// Address: 0x00407C10

//----- (00407C10) --------------------------------------------------------
int __thiscall sub_407C10(_DWORD *this, __int64 a2, __int64 a3, int a4, int (__thiscall ***a5)(_DWORD, _DWORD *))
{
  _DWORD *v5; // ebx
  _DWORD *v6; // eax
  unsigned int v7; // edi
  int *v8; // ecx
  int v9; // eax
  _DWORD *v10; // ebx
  int v11; // ecx
  int v12; // esi
  _DWORD *v13; // ecx
  int *v14; // ebx
  int *v15; // eax
  _DWORD *v16; // eax
  _DWORD *v17; // ecx
  _DWORD *v18; // esi
  int v19; // eax
  _DWORD *v20; // ecx
  int v21; // eax
  __int64 v23; // [esp+10h] [ebp-40h] BYREF
  _DWORD **v24; // [esp+18h] [ebp-38h]
  int v25; // [esp+1Ch] [ebp-34h]
  _DWORD *v26; // [esp+20h] [ebp-30h] BYREF
  int v27; // [esp+24h] [ebp-2Ch]
  _DWORD *v28; // [esp+28h] [ebp-28h]
  unsigned __int64 v29; // [esp+2Ch] [ebp-24h]
  unsigned int v30; // [esp+34h] [ebp-1Ch]
  int v31; // [esp+38h] [ebp-18h] BYREF
  _DWORD *v32; // [esp+3Ch] [ebp-14h]
  _DWORD *v33; // [esp+40h] [ebp-10h]
  int v34; // [esp+4Ch] [ebp-4h]

  v5 = this;
  v28 = this;
  v27 = 0;
  v6 = sub_4627C2(0x14u);
  *v6 = v6;
  v6[1] = v6;
  v6[2] = v6;
  *((_WORD *)v6 + 6) = 257;
  v26 = v6;
  v7 = a2;
  v34 = 0;
  v29 = a3 + a2;
  if ( (unsigned int)a2 < (unsigned __int64)(a3 + a2) )
  {
    while ( 1 )
    {
      v8 = (int *)v5[7];
      HIDWORD(a2) = 0;
      v9 = *v8;
      v30 = v7;
      if ( (*(int (__stdcall **)(int *, unsigned int, _DWORD, int, char *, int *))(v9 + 80))(
             v8,
             v7,
             0,
             a4,
             (char *)&a2 + 4,
             &v31) < 0
        || !HIDWORD(a2) )
      {
        goto LABEL_22;
      }
      v10 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _DWORD, int))(*v5 + 60))(v5, HIDWORD(a2), 1);
      v33 = v10;
      v11 = *v10;
      LOBYTE(v34) = 1;
      if ( (*(int (__thiscall **)(_DWORD *, char *))(v11 + 88))(v10, (char *)&a3 + 4) )
        break;
      v23 = 0;
      (*(void (__stdcall **)(_DWORD, __int64 *))(*(_DWORD *)HIDWORD(a2) + 68))(HIDWORD(a2), &v23);
      v12 = 0;
      v13 = v26;
      v32 = v26;
      v14 = (int *)v26[1];
      if ( !*((_BYTE *)v14 + 13) )
      {
        v15 = (int *)v26[1];
        do
        {
          v14 = v15;
          if ( (unsigned int)v15[4] >= HIDWORD(a3) )
          {
            v13 = v15;
            v12 = 1;
            v15 = (int *)*v15;
          }
          else
          {
            v15 = (int *)v15[2];
            v12 = 0;
          }
        }
        while ( !*((_BYTE *)v15 + 13) );
      }
      if ( *((_BYTE *)v13 + 13) || HIDWORD(a3) < v13[4] )
      {
        if ( v27 == 214748364 )
          sub_403E20();
        v24 = &v26;
        LOBYTE(v34) = 2;
        v25 = 0;
        v16 = sub_4627C2(0x14u);
        LOBYTE(v34) = 1;
        v25 = 0;
        v16[4] = HIDWORD(a3);
        v17 = v32;
        *v16 = v32;
        v16[1] = v17;
        v16[2] = v17;
        *((_WORD *)v16 + 6) = 0;
        sub_403C10(&v26, v14, v12, (int)v16);
        v18 = v33;
        if ( (**a5)(a5, v33) < 0 )
        {
          v19 = *v18;
          v20 = v18;
LABEL_21:
          (*(void (__thiscall **)(_DWORD *, int))(v19 + 144))(v20, 1);
          goto LABEL_22;
        }
      }
      else
      {
        v18 = v33;
      }
      v7 += v23 - v31;
      if ( v7 <= v30 )
      {
        if ( byte_4B70F0 )
          __debugbreak();
        sub_4533F0(30169);
      }
      v21 = *v18;
      LOBYTE(v34) = 0;
      (*(void (__thiscall **)(_DWORD *, int))(v21 + 144))(v18, 1);
      if ( v7 >= v29 )
        goto LABEL_22;
      v5 = v28;
    }
    v19 = *v10;
    v20 = v10;
    goto LABEL_21;
  }
LABEL_22:
  sub_402EB0((void **)&v26);
  return 0;
}
// 4B70F0: using guessed type char byte_4B70F0;
