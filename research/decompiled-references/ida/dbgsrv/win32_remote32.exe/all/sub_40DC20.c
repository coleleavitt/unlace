/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40DC20
// Address: 0x0040DC20

//----- (0040DC20) --------------------------------------------------------
int __userpurge sub_40DC20@<eax>(int a1@<ebp>, int *a2, LPVOID *a3, int a4, unsigned int a5, int a6)
{
  LPVOID *v6; // ecx
  unsigned int v7; // eax
  int result; // eax
  int v9; // esi
  int *v10; // edi
  int v11; // ecx
  int v12; // esi
  _DWORD *v13; // eax
  LPVOID *v14; // eax
  int v15; // ecx
  unsigned int v16; // edx
  _DWORD *v17; // [esp-70h] [ebp-7Ch]
  int v18; // [esp-6Ch] [ebp-78h]
  __int128 v19; // [esp-58h] [ebp-64h]
  _DWORD v20[2]; // [esp-3Ch] [ebp-48h] BYREF
  int v21; // [esp-34h] [ebp-40h]
  LPVOID *v22; // [esp-30h] [ebp-3Ch]
  __int128 v23; // [esp-28h] [ebp-34h] BYREF
  LPVOID *v24; // [esp-18h] [ebp-24h]
  int *v25; // [esp-10h] [ebp-1Ch]
  struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // [esp-Ch] [ebp-18h]
  void *v27; // [esp-8h] [ebp-14h]
  int v28; // [esp-4h] [ebp-10h]
  int v29; // [esp+0h] [ebp-Ch]
  void *v30; // [esp+4h] [ebp-8h]
  int v31; // [esp+8h] [ebp-4h] BYREF
  void *retaddr; // [esp+Ch] [ebp+0h]

  v29 = a1;
  v30 = retaddr;
  v28 = -1;
  v27 = &loc_48375D;
  ExceptionList = NtCurrentTeb()->NtTib.ExceptionList;
  v25 = &v31;
  v6 = a3;
  v22 = a3;
  if ( !a2[50] && (a2[84] & 0x80000) != 0 )
  {
    if ( sub_455100() )
    {
      if ( byte_4B70F0 )
        __debugbreak();
      sub_4533F0(30191);
    }
    v6 = v22;
  }
  if ( a4 != 4 )
  {
    if ( a4 == 3 || a4 == 1 || a4 == 8 )
    {
      v15 = a6;
      if ( a6 != 1 && (a4 == 8 || a6 != 2 && a6 != 4) )
        goto LABEL_30;
      v16 = a5;
      if ( ((a6 - 1) & a5) != 0 )
        return (*(int (__stdcall **)(int *, int, unsigned int, int))(*a2 + 164))(a2, a4, v16, v15);
      result = (unsigned __int8)sub_44B0E0(a2, a4, a5, a6);
      if ( (_BYTE)result )
        return result;
    }
    v15 = a6;
LABEL_30:
    v16 = a5;
    return (*(int (__stdcall **)(int *, int, unsigned int, int))(*a2 + 164))(a2, a4, v16, v15);
  }
  v7 = a6;
  v22 = (LPVOID *)a6;
  if ( a6 <= 0 )
  {
    v7 = a2[52];
    v22 = (LPVOID *)v7;
  }
  if ( v6 && sub_43D830(a2, v6, a5, v7) < 0 )
    return -2;
  LODWORD(v23) = a5;
  BYTE12(v23) = (_BYTE)v22;
  v24 = nullptr;
  if ( (unsigned __int8)v22 >= 8u )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(1796);
  }
  if ( !(*(int (__stdcall **)(int *, unsigned int, char *, LPVOID *, _DWORD))(*a2 + 140))(
          a2,
          a5,
          (char *)&v23 + 4,
          v22,
          0) )
    return -2;
  v9 = a2[52];
  if ( (*(int (__stdcall **)(int *, unsigned int, int, int, _DWORD))(*a2 + 144))(a2, a5, a2[51], v9, 0) != v9 )
    return 0;
  v10 = a2 + 54;
  v22 = v24;
  v19 = v23;
  sub_408C10(a2 + 54, v20, &a5);
  v11 = v21;
  if ( *(_BYTE *)(v21 + 13) || a5 < *(_DWORD *)(v21 + 16) )
  {
    if ( a2[55] == 107374182 )
      sub_403E20();
    v12 = *v10;
    v28 = 0;
    v13 = sub_4627C2(0x28u);
    v18 = v20[1];
    v13[4] = a5;
    v17 = (_DWORD *)v20[0];
    v13[5] = -1;
    *((_BYTE *)v13 + 32) = 0;
    v13[9] = 0;
    *v13 = v12;
    v13[1] = v12;
    v13[2] = v12;
    *((_WORD *)v13 + 6) = 0;
    v11 = sub_403C10(v10, v17, v18, (int)v13);
  }
  v14 = v22;
  *(_OWORD *)(v11 + 20) = v19;
  *(_DWORD *)(v11 + 36) = v14;
  return 1;
}
// 40DC20: could not find valid save-restore pair for ebp
// 4B70F0: using guessed type char byte_4B70F0;
