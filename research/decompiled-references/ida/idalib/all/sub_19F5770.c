__int64 __fastcall sub_19F5770(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v6; // rbp
  __int64 *v7; // rax
  _QWORD *v8; // rax
  unsigned int v9; // r12d
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // rbp
  __int64 v15; // r14
  int v16; // r13d
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned int v21; // eax
  _BOOL4 v22; // esi
  unsigned int v23; // r12d
  int v24; // eax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rdx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r12
  unsigned __int8 v31; // al
  __int64 v32; // rsi
  int v33; // eax
  int v34; // ebp
  int v35; // eax
  __int64 v36; // rax
  __int64 v37; // rdx
  int v38; // r12d
  void *v39; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v40; // [rsp+8h] [rbp-30h]

  v6 = (__int64 *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v7 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(*v7 + 16) == 48 )
  {
    v8 = sub_F60F10(*v7, a2, a3, a4, a5, a6);
    v9 = 0;
    v14 = sub_B7E900((__int64)v8, a2, v10, v11, v12, v13);
    if ( v14 )
    {
      while ( 1 )
      {
LABEL_3:
        v15 = *(_QWORD *)(v14 + 48);
        v16 = sub_19F5770(a1, v15);
        v21 = sub_19F55C0((__int64)a1, v15, v17, v18, v19, v20);
        v22 = v9 != 0;
        v23 = v9 - v22;
        v24 = v21 * (v22 + v23 / v21);
        if ( v16 + (v24 & 0xFu) > 0x10 )
          v24 = 16 * (v22 + (v23 >> 4));
        v9 = v16 + v24;
        v25 = *(_QWORD *)(v14 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        v14 = v25;
        if ( !v25 )
          return v9;
        if ( (*(_BYTE *)(v25 + 28) & 0x7Fu) - 49 > 2 )
        {
          while ( 1 )
          {
            v26 = *(_QWORD *)(v14 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            v14 = v26;
            if ( !v26 )
              return v9;
            if ( (*(_BYTE *)(v26 + 28) & 0x7Fu) - 49 <= 2 )
              goto LABEL_3;
          }
        }
      }
    }
    return 0;
  }
  v28 = sub_A72040(a1, a2);
  v30 = v28;
  if ( v28 && (unsigned int)*(unsigned __int8 *)(v28 + 16) - 2 <= 1 )
  {
    v31 = *(_BYTE *)(v28 + 19);
    v32 = *(_QWORD *)(v30 + 40);
    if ( (v31 & 2) != 0 )
    {
      v40 = *(_DWORD *)(v32 + 8);
      if ( v40 <= 0x40 )
      {
        v39 = *(void **)v32;
        goto LABEL_25;
      }
      sub_2205510(&v39);
      v33 = v40;
    }
    else
    {
      v33 = 8 * ((v31 >> 2) & 0x1F);
      v40 = v33;
      if ( v33 > 64 )
      {
        sub_2205470(&v39, v32, 0);
        v33 = v40;
      }
      else
      {
        v39 = (void *)v32;
      }
    }
    if ( (unsigned int)v33 > 0x40 )
    {
      v34 = *(_DWORD *)v39;
      operator delete[](v39);
      goto LABEL_19;
    }
LABEL_25:
    v34 = (int)v39;
LABEL_19:
    if ( v34 )
    {
      v35 = sub_19F5770(a1, *(_QWORD *)(v30 + 32));
      return v35 + 16 * (v34 - 1) * ((v35 != 0) + ((v35 - (unsigned int)(v35 != 0)) >> 4));
    }
    return 0;
  }
  v36 = *v6;
  v37 = (unsigned int)*(unsigned __int8 *)(*v6 + 16) - 57;
  if ( (unsigned int)v37 > 1 )
  {
    v36 = sub_19F5590(v36, a2, v37, v29);
    if ( !v36 )
      return (unsigned int)((unsigned __int64)sub_A97D20((__int64)a1, *v6) >> 3);
  }
  v38 = *(_DWORD *)(v36 + 20);
  return (unsigned int)sub_19F5770(a1, *(_QWORD *)(v36 + 32)) * v38;
}
