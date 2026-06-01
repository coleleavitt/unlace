void __fastcall sub_14086E0(__int64 a1, __int64 *a2, char a3, int a4, _BYTE *a5, signed __int64 a6, _QWORD *a7)
{
  __int64 v11; // rax
  __int64 v12; // rdi
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r9
  __int64 v16; // rdx
  _QWORD *v17; // r13
  _QWORD *v18; // r15
  unsigned __int64 v19; // r8
  _QWORD *v20; // rax
  __int64 v21; // rax
  unsigned __int64 v22; // rdi
  unsigned __int64 v23; // rsi
  __int64 v24; // rdi
  unsigned __int64 v25; // r13
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 i; // rax
  unsigned __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  unsigned __int64 v34; // [rsp+10h] [rbp-C8h]
  unsigned __int64 v35; // [rsp+10h] [rbp-C8h]
  _QWORD *v36; // [rsp+18h] [rbp-C0h]
  __int64 v37; // [rsp+18h] [rbp-C0h]
  unsigned __int64 v38; // [rsp+28h] [rbp-B0h]
  void *v39[2]; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v40; // [rsp+40h] [rbp-98h] BYREF
  void *ptr[2]; // [rsp+50h] [rbp-88h] BYREF
  _BYTE v42[120]; // [rsp+60h] [rbp-78h] BYREF

  v36 = a7;
  if ( a2 )
  {
    v11 = sub_FEEE40((__int64)a2);
    v12 = *(_QWORD *)(a1 + 72);
    if ( v12 )
    {
      if ( v11 != sub_FEEE40(v12) )
        return;
    }
    else if ( v11 )
    {
      return;
    }
    sub_1408340(a1, (__int64)a2, 0);
    sub_1401A10(a1, (__int64)a2, 0, 0);
  }
  else
  {
    v24 = *(_QWORD *)(a1 + 72);
    if ( v24 && sub_FEEE40(v24) )
      return;
  }
  v13 = sub_1403A00(a1, a7);
  if ( v13 != *(_QWORD *)(a1 + 368) + 32LL * *(unsigned int *)(a1 + 384) )
  {
    v16 = *(_QWORD *)(v13 + 8);
    v17 = (_QWORD *)(v16 + 8LL * *(unsigned int *)(v13 + 16));
    if ( (_QWORD *)v16 == v17 )
      return;
    v34 = 0;
    v18 = *(_QWORD **)(v13 + 8);
    v19 = 0;
    while ( 1 )
    {
      if ( (*v18 & 7LL) != 4 )
      {
        v20 = a7;
        do
        {
          v21 = v20[1];
          if ( !v21 )
            break;
          if ( (v21 & 4) == 0 )
            break;
          v20 = (_QWORD *)(v21 & 0xFFFFFFFFFFFFFFF8LL);
        }
        while ( v20 );
        if ( (*(_DWORD *)v18 & 1) == 0 )
        {
          if ( !a2 )
            return;
LABEL_21:
          if ( (*(_BYTE *)(*(_QWORD *)(a1 + 16) + 22LL) & 2) == 0
            || (unsigned __int8)sub_FF5710((__int64)a2, (_QWORD *)(*v18 & 0xFFFFFFFFFFFFFFF8LL), v16, v14, v19, v15) )
          {
            return;
          }
          v19 = *v18 & 0xFFFFFFFFFFFFFFF8LL;
          goto LABEL_24;
        }
        v22 = *v18 & 0xFFFFFFFFFFFFFFF8LL;
        v23 = v22;
        if ( a2 )
        {
          v38 = v19;
          v37 = sub_FEEE40((__int64)a2);
          if ( v37 == sub_FEEE40(v22) )
            goto LABEL_21;
          v19 = v38;
          v23 = *v18 & 0xFFFFFFFFFFFFFFF8LL;
        }
        v34 = v23;
      }
LABEL_24:
      if ( v17 == ++v18 )
      {
        if ( v34 )
        {
          sub_FC70B0((__int64)ptr, *(_QWORD *)(a1 + 8), a4, 1424);
          sub_AEC220((unsigned __int8 **)ptr, a5, a6);
          sub_AEA040((__int64)ptr);
        }
        else
        {
          v35 = v19;
          if ( v19 )
          {
            sub_FC70B0((__int64)ptr, *(_QWORD *)(a1 + 8), a4, 1193);
            v30 = sub_FEEE40((__int64)a2);
            sub_AEC220((unsigned __int8 **)ptr, *(_BYTE **)v30, *(_QWORD *)(v30 + 8));
            sub_AEC220((unsigned __int8 **)ptr, a5, a6);
            sub_AEC220((unsigned __int8 **)ptr, *(_BYTE **)v35, *(_QWORD *)(v35 + 8));
            sub_AEA040((__int64)ptr);
          }
        }
        return;
      }
    }
  }
  ptr[1] = (void *)0x200000000LL;
  ptr[0] = v42;
  v25 = sub_13F9800(a1, (__int64)a7, (__int64)ptr);
  if ( ptr[0] != v42 )
    free(ptr[0]);
  if ( (v25 & 0xFFFFFFFFFFFFFFF8LL) == 0 && a2 )
  {
    v26 = *(_QWORD *)(a1 + 16);
    if ( (*(_BYTE *)(v26 + 22) & 8) != 0 )
    {
      sub_FC70B0((__int64)ptr, *(_QWORD *)(a1 + 8), a4, 1192);
      v31 = sub_FEEE40((__int64)a2);
      sub_AEC220((unsigned __int8 **)ptr, *(_BYTE **)v31, *(_QWORD *)(v31 + 8));
      sub_AEC220((unsigned __int8 **)ptr, a5, a6);
      sub_AEA040((__int64)ptr);
    }
    else if ( a3 && *(_BYTE *)(v26 + 201) >> 5 )
    {
      v27 = sub_FEEE40((__int64)a2);
      sub_FC70B0((__int64)ptr, *(_QWORD *)(a1 + 8), a4, ((*(_BYTE *)(v27 + 904) & 0x10) == 0) + 1370);
      sub_FEEE60((__int64)v39, a2, 0);
      sub_AEC220((unsigned __int8 **)ptr, (_BYTE *)v39[0], (signed __int64)v39[1]);
      for ( i = a7[1]; i; i = *(_QWORD *)(v29 + 8) )
      {
        if ( (i & 4) == 0 )
          break;
        v29 = i & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v29 )
          break;
        v36 = (_QWORD *)v29;
      }
      sub_AEC220((unsigned __int8 **)ptr, (_BYTE *)v36 + 32, *v36);
      if ( v39[0] != &v40 )
        operator delete(v39[0]);
      sub_AEA040((__int64)ptr);
    }
  }
}
