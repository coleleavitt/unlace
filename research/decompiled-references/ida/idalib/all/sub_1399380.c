void __fastcall sub_1399380(void **a1)
{
  bool v1; // zf
  __int64 v2; // rbx
  char *v3; // rbp
  __int64 v4; // rax
  const char *v5; // r12
  __int64 v6; // r13
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  size_t v17; // rdx
  __int64 v18; // rbp
  int v19; // ebp
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // [rsp+0h] [rbp-B8h]
  void *v23[2]; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v24; // [rsp+20h] [rbp-98h] BYREF
  void *v25[2]; // [rsp+30h] [rbp-88h] BYREF
  void **v26; // [rsp+40h] [rbp-78h]
  __int64 v27; // [rsp+48h] [rbp-70h]
  void *v28; // [rsp+50h] [rbp-68h]
  __int64 v29; // [rsp+58h] [rbp-60h]
  __int64 v30; // [rsp+60h] [rbp-58h]
  unsigned int v31; // [rsp+68h] [rbp-50h]
  __int64 v32; // [rsp+70h] [rbp-48h]
  __int64 v33; // [rsp+78h] [rbp-40h]
  unsigned int v34; // [rsp+80h] [rbp-38h]

  v1 = *((_BYTE *)a1 + 24) == 0;
  *((_BYTE *)a1 + 26) = 1;
  if ( !v1 )
  {
    v2 = (__int64)a1;
    v3 = (char *)a1[4];
    if ( v3[2400] )
    {
      a1 = (void **)(v3 + 1312);
      sub_A25550((__int64)(v3 + 1312));
      if ( *(_BYTE *)(v2 + 25) )
      {
        v14 = *(_QWORD *)(v2 + 32);
        if ( !*(_BYTE *)(v14 + 2400) )
          return;
        LOWORD(v28) = 260;
        a1 = v25;
        v25[0] = (void *)(v14 + 1464);
        if ( !(unsigned int)sub_228C1E0(v25, 0) )
        {
          v16 = *(_QWORD *)(v2 + 32);
          v25[1] = (void *)v2;
          v17 = 0;
          v25[0] = &off_2BB2570;
          v26 = nullptr;
          v27 = 0;
          LODWORD(v28) = 0;
          v29 = 0;
          v30 = 0;
          v31 = 0;
          v32 = 0;
          v33 = 0;
          v34 = 0;
          v18 = *(_QWORD *)(v16 + 1464);
          if ( v18 )
            v17 = strlen(*(const char **)(v16 + 1464));
          v19 = sub_13A2140(v25, v18, v17);
          v25[0] = &off_2BB2570;
          operator delete(v32, 8LL * v34, 4);
          operator delete(v29, 8LL * v31, 4);
          a1 = v26;
          v20 = 8LL * (unsigned int)v28;
          operator delete(v26, v20, 4);
          if ( v19 )
          {
            v21 = sub_1396D90(v2, v20);
            sub_FC70B0((__int64)v25, v21, 0, 834);
            a1 = v25;
            sub_AEA040((__int64)v25);
          }
        }
      }
      v3 = *(char **)(v2 + 32);
    }
    else if ( *((_BYTE *)a1 + 25) )
    {
      return;
    }
    LODWORD(v22) = 0;
    v4 = std::_V2::system_category((std::_V2 *)a1);
    v5 = *((const char **)v3 + 183);
    v6 = v4;
    if ( v5 )
      strlen(v5);
    v7 = operator new(0x60u);
    sub_227D450((std::_V2 *)v7);
    v8 = *(_QWORD *)(v2 + 32);
    v9 = *(_QWORD *)(v8 + 264);
    sub_227BF10(v7, v9, *(_QWORD *)(v8 + 272));
    if ( *(_QWORD *)(v7 + 32) != *(_QWORD *)(v7 + 16) )
      sub_227B9F0(v7, v9, v10, v11, v12, v13, v22);
    if ( *(_DWORD *)(v7 + 72) )
    {
      v15 = sub_1396D90(v2, v9);
      sub_FC70B0((__int64)v25, v15, 0, 832);
      sub_AEC220(
        (unsigned __int8 **)v25,
        *(_BYTE **)(*(_QWORD *)(v2 + 32) + 1464LL),
        *(_QWORD *)(*(_QWORD *)(v2 + 32) + 1472LL));
      (*(void (__fastcall **)(void **, _QWORD, _QWORD))(**(_QWORD **)(v7 + 80) + 32LL))(
        v23,
        *(_QWORD *)(v7 + 80),
        *(unsigned int *)(v7 + 72));
      sub_AEC220((unsigned __int8 **)v25, (_BYTE *)v23[0], (signed __int64)v23[1]);
      if ( v23[0] != &v24 )
        operator delete(v23[0]);
      sub_AEA040((__int64)v25);
      *(_DWORD *)(v7 + 72) = 0;
      *(_QWORD *)(v7 + 80) = v6;
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  }
}
