__int64 __fastcall sub_11E64E0(__int64 a1, __int64 a2, int a3, __int64 a4, char a5)
{
  const char **v6; // rax
  const char *v7; // rbp
  size_t v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  bool v13; // zf
  void *v16[2]; // [rsp+10h] [rbp-118h] BYREF
  __int64 v17; // [rsp+20h] [rbp-108h] BYREF
  _OWORD v18[4]; // [rsp+30h] [rbp-F8h] BYREF
  void *v19; // [rsp+70h] [rbp-B8h]
  __int64 v20; // [rsp+80h] [rbp-A8h] BYREF
  void *v21; // [rsp+B0h] [rbp-78h]
  _BYTE v22[104]; // [rsp+C0h] [rbp-68h] BYREF

  v6 = *(const char ***)(a4 + 48);
  v7 = *v6;
  if ( *v6 && strlen(*v6) )
  {
    v9 = j__strlen(v7);
    v18[0] = 0;
    sub_22578D0(v18, v7, v9, v10, v11, v12);
    sub_11E3F60((__int64)v18, 2, a3, *(__int64 *)&v18[0], *((__int64 *)&v18[0] + 1), a4);
    if ( a5 )
      DWORD2(v18[0]) = 1;
    sub_11E4450(a1, (__int64)v18);
    v13 = v22[40] == 0;
    *(_BYTE *)(a1 + 192) = 1;
    if ( !v13 && v21 != v22 )
      operator delete(v21);
    if ( v19 != &v20 )
      operator delete(v19);
  }
  else
  {
    sub_FC70B0((__int64)v18, **(_QWORD **)a2, 0, 421);
    sub_21B5FF0(v16, a4, *(_QWORD *)(a2 + 8));
    sub_AEC220((unsigned __int8 **)v18, (_BYTE *)v16[0], (signed __int64)v16[1]);
    if ( v16[0] != &v17 )
      operator delete(v16[0]);
    sub_AEA040((__int64)v18);
    *(_BYTE *)(a1 + 192) = 0;
  }
  return a1;
}
