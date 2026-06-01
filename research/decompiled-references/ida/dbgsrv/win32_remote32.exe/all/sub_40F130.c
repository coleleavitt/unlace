/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40F130
// Address: 0x0040F130

//----- (0040F130) --------------------------------------------------------
int __userpurge sub_40F130@<eax>(
        __m128i a1@<xmm0>,
        _DWORD *a2,
        const CHAR *a3,
        const char *a4,
        int a5,
        _BYTE *a6,
        char a7,
        LPCCH lpMultiByteStr,
        int a9,
        int a10)
{
  bool v10; // zf
  void **v12; // ebx
  unsigned int v13; // esi
  unsigned int v14; // eax
  char *v15; // ebx
  char v16; // al
  CHAR *v17; // ecx
  unsigned int v18; // ecx
  int v19; // esi
  _BYTE *v20; // eax
  int v21; // esi
  _BYTE *v22; // eax
  int v23; // esi
  _BYTE *v24; // eax
  unsigned int v25; // ecx
  int v26; // esi
  _BYTE *v27; // eax
  int v28; // esi
  void **v29; // ebx
  unsigned int v30; // esi
  unsigned int v31; // eax
  unsigned int v32; // [esp-8h] [ebp-64h]
  const CHAR *v33; // [esp-4h] [ebp-60h]
  _DWORD v34[4]; // [esp+10h] [ebp-4Ch] BYREF
  int v35; // [esp+20h] [ebp-3Ch]
  int v36; // [esp+24h] [ebp-38h]
  _BYTE *v37; // [esp+28h] [ebp-34h]
  void *v38; // [esp+2Ch] [ebp-30h] BYREF
  int v39; // [esp+30h] [ebp-2Ch]
  CHAR *v40; // [esp+38h] [ebp-24h]
  LPCCH v41; // [esp+3Ch] [ebp-20h]
  LPCCH v42; // [esp+40h] [ebp-1Ch]
  _BYTE *v43; // [esp+44h] [ebp-18h] BYREF
  int v44; // [esp+48h] [ebp-14h]
  unsigned int v45; // [esp+4Ch] [ebp-10h]
  int v46; // [esp+58h] [ebp-4h]
  __int8 v47[260]; // [esp+5Ch] [ebp+0h] BYREF

  v41 = a3;
  v10 = a2[50] == 0;
  v40 = (CHAR *)a4;
  v36 = a5;
  v37 = a6;
  v42 = lpMultiByteStr;
  if ( v10 && (a2[84] & 0x80000) != 0 && sub_455100() )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(30191);
  }
  if ( *lpMultiByteStr && !sub_457B00(lpMultiByteStr) )
  {
    sub_410500((int)a2, (int)"AUTOHIDE NONE\nInput file is missing: %s", lpMultiByteStr);
    return -3;
  }
  v12 = (void **)(a2 + 59);
  v13 = strlen(lpMultiByteStr);
  if ( v13 )
  {
    v14 = v13 + 1;
    if ( v13 + 1 > a2[61] )
    {
      *v12 = sub_453B00((int)(a2 + 59), *v12, v13 + 1, 1u);
      v14 = v13 + 1;
    }
    v32 = (unsigned int)v42;
    a2[60] = v14;
    sub_464310((unsigned int)*v12, v32, v13);
    *((_BYTE *)*v12 + v13) = 0;
  }
  else
  {
    a2[60] = 0;
  }
  v15 = (char *)v41;
  v33 = v41;
  *((_BYTE *)a2 + 373) = a7 & 1;
  if ( !sub_457B00(v33) )
  {
    if ( sub_4567D0((unsigned __int8 *)v15) || !sub_457850(a1, v47, 260, v15, 0) )
    {
      sub_410500((int)a2, (int)"AUTOHIDE NONE\nCannot find application file '%s'", v15);
      return -2;
    }
    v15 = v47;
    v41 = v47;
  }
  v16 = (*(int (__thiscall **)(_DWORD *, int))(*a2 + 20))(a2, a9);
  *((_BYTE *)a2 + 661) = 0;
  v43 = nullptr;
  v44 = 0;
  v45 = 0;
  v35 = 2 - (v16 != 0);
  v17 = v40;
  v46 = 0;
  if ( v40 && *v40 )
  {
    v43 = sub_453B00((int)&v43, nullptr, 2u, 1u);
    v44 = 2;
    *v43 = 34;
    v43[1] = 0;
    sub_401340(&v38, v15);
    LOBYTE(v46) = 1;
    v18 = v39 != 0 ? v39 - 1 : 0;
    v42 = (LPCCH)v18;
    if ( v18 )
    {
      v19 = v44 != 0 ? v44 - 1 : 0;
      if ( v18 + v19 + 1 <= v45 )
      {
        v20 = v43;
      }
      else
      {
        v20 = sub_453B00((int)&v43, v43, v18 + v19 + 1, 1u);
        v18 = (unsigned int)v42;
        v43 = v20;
      }
      v44 = v18 + v19 + 1;
      v20[v19 + v18] = 0;
      sub_464310((unsigned int)&v43[v19], (unsigned int)v38, v18);
    }
    LOBYTE(v46) = 2;
    if ( v38 )
    {
      v39 = 0;
      sub_453A20(v38);
    }
    LOBYTE(v46) = 0;
    v21 = v44 != 0 ? v44 - 1 : 0;
    if ( v21 + 2 <= v45 )
    {
      v22 = v43;
    }
    else
    {
      v22 = sub_453B00((int)&v43, v43, v21 + 2, 1u);
      v43 = v22;
    }
    v44 = v21 + 2;
    v22[v21] = 34;
    v43[v21 + 1] = 0;
    v23 = v44 != 0 ? v44 - 1 : 0;
    if ( v23 + 2 <= v45 )
    {
      v24 = v43;
    }
    else
    {
      v24 = sub_453B00((int)&v43, v43, v23 + 2, 1u);
      v43 = v24;
    }
    v44 = v23 + 2;
    v24[v23] = 32;
    v43[v23 + 1] = 0;
    sub_401340(&v38, v40);
    LOBYTE(v46) = 3;
    v25 = v39 != 0 ? v39 - 1 : 0;
    v42 = (LPCCH)v25;
    if ( v25 )
    {
      v26 = v44 != 0 ? v44 - 1 : 0;
      if ( v25 + v26 + 1 <= v45 )
      {
        v27 = v43;
      }
      else
      {
        v27 = sub_453B00((int)&v43, v43, v25 + v26 + 1, 1u);
        v25 = (unsigned int)v42;
        v43 = v27;
      }
      v44 = v25 + v26 + 1;
      v27[v26 + v25] = 0;
      sub_464310((unsigned int)&v43[v26], (unsigned int)v38, v25);
    }
    LOBYTE(v46) = 4;
    if ( v38 )
    {
      v39 = 0;
      sub_453A20(v38);
    }
    v17 = (CHAR *)MultiByteStr;
    LOBYTE(v46) = 0;
    if ( v44 )
      v17 = v43;
  }
  LOBYTE(v40) = (a7 & 2) != 0;
  LOBYTE(v42) = (a7 & 0x20) != 0;
  if ( sub_40D6D0((int)a2, a1, v15, v17, v36, v37, (char)v40, (char)v42, (int)v34) )
  {
    v29 = (void **)(a2 + 122);
    a2[64] = v34[2];
    a2[113] = v34[0];
    a2[125] = v34[1];
    if ( v41 && (v30 = strlen(v41)) != 0 )
    {
      v31 = v30 + 1;
      if ( v30 + 1 > a2[124] )
      {
        *v29 = sub_453B00((int)(a2 + 122), *v29, v30 + 1, 1u);
        v31 = v30 + 1;
      }
      a2[123] = v31;
      sub_464310((unsigned int)*v29, (unsigned int)v41, v30);
      *((_BYTE *)*v29 + v30) = 0;
    }
    else
    {
      a2[123] = 0;
    }
    v28 = -2;
    if ( sub_418FA0(a2, a2[64]) )
      v28 = v35;
  }
  else
  {
    v28 = -1;
  }
  v46 = 7;
  if ( v43 )
  {
    v44 = 0;
    sub_453A20(v43);
  }
  return v28;
}
// 4B70F0: using guessed type char byte_4B70F0;
