__int64 __fastcall sub_1D6FF70(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        __int64 (__fastcall *a4)(_QWORD),
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  _QWORD *v7; // r15
  _QWORD *v8; // r14
  __int64 (__fastcall *v9)(_QWORD *); // r13
  char v11; // al
  unsigned int v12; // eax
  unsigned int v13; // ebx
  __int64 v15; // r12
  _QWORD *v16; // r14
  __int64 v17; // rax
  unsigned int v18; // eax
  __int64 v19; // rdx
  void *v20; // rax
  __int64 *v21; // r15
  __int64 *v22; // rbp
  unsigned __int8 v23; // r13
  __int64 v24; // rax
  __int64 *v25; // r13
  __int64 *v26; // r15
  unsigned __int8 v27; // bp
  __int64 v28; // rax
  unsigned __int64 v29; // rax
  __int64 v30; // r8
  __int64 v31; // r9
  char v32; // al
  __int64 (__fastcall *v33)(_QWORD *); // [rsp+8h] [rbp-90h]
  __int64 v34; // [rsp+8h] [rbp-90h]
  __int64 v35; // [rsp+10h] [rbp-88h]
  __int64 v36[2]; // [rsp+20h] [rbp-78h] BYREF
  char v37; // [rsp+30h] [rbp-68h]
  void *v38; // [rsp+40h] [rbp-58h] BYREF
  unsigned int v39; // [rsp+48h] [rbp-50h]
  char v40; // [rsp+4Ch] [rbp-4Ch]
  char v41; // [rsp+50h] [rbp-48h]

  v7 = (_QWORD *)a3;
  v8 = nullptr;
  v9 = (__int64 (__fastcall *)(_QWORD *))a4;
  v11 = *(_BYTE *)(a3 + 16);
  v33 = (__int64 (__fastcall *)(_QWORD *))a7;
  if ( v11 == 31 )
  {
LABEL_2:
    if ( (*a2 & 0x20000) == 0 )
      goto LABEL_3;
    goto LABEL_16;
  }
  if ( v11 != 32 )
  {
    v7 = nullptr;
    goto LABEL_2;
  }
  v8 = (_QWORD *)a3;
  v7 = nullptr;
  if ( (*a2 & 0x20000) == 0 )
  {
LABEL_3:
    sub_C3EB00((__int64)v36, (unsigned __int64)a2, *(_QWORD *)(*(_QWORD *)a1 + 248LL), nullptr, a5, a6);
    if ( v37 )
    {
      if ( v7 )
      {
        if ( ((unsigned __int8)a4 & 1) != 0 )
          v9 = *(__int64 (__fastcall **)(_QWORD *))((char *)a4 + *v7 - 1);
        v12 = v9(v7);
        v40 = 0;
        v39 = 64;
        v38 = (void *)v12;
        v13 = sub_98E2D0(v36, (__int64 *)&v38);
        if ( v39 > 0x40 && v38 )
          operator delete[](v38);
        if ( !v13 )
          goto LABEL_12;
      }
      else
      {
        if ( (a7 & 1) != 0 )
          v33 = *(__int64 (__fastcall **)(_QWORD *))(*v8 + a7 - 1);
        v29 = v33(v8);
        sub_C3EB00((__int64)&v38, v29, *(_QWORD *)(*(_QWORD *)a1 + 248LL), nullptr, v30, v31);
        if ( v41 )
        {
          v32 = v39 <= 0x40 ? v38 == (void *)v36[0] : sub_2205D70(&v38, v36);
          if ( v32 )
          {
            v13 = 0;
            sub_98E4B0((__int64)&v38);
            goto LABEL_12;
          }
        }
        sub_98E4B0((__int64)&v38);
      }
    }
    v13 = 10;
LABEL_12:
    sub_98E4B0((__int64)v36);
    return v13;
  }
LABEL_16:
  v35 = *(_QWORD *)(a1 + 8);
  v15 = sub_1D365B0((__int64)a2, *(_DWORD *)(v35 + 24));
  if ( v15 )
  {
    if ( v7 )
    {
      v16 = *(_QWORD **)(*(_QWORD *)a1 + 248LL);
      v17 = sub_A63CE0(v16);
      v39 = sub_A97D20((__int64)v16, *(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFF0LL));
      if ( v39 > 0x40 )
        sub_2205470(&v38, 0, 0);
      else
        v38 = nullptr;
      v40 = 1;
      if ( ((unsigned __int8)a4 & 1) != 0 )
        v9 = *(__int64 (__fastcall **)(_QWORD *))((char *)a4 + *v7 - 1);
      v18 = v9(v7);
      v19 = v39;
      if ( v39 > 0x40 )
      {
        *(_QWORD *)v38 = v18;
        memset((char *)v38 + 8, 0, 8 * ((unsigned int)((unsigned __int64)(v19 + 63) >> 6) + 0x1FFFFFFF));
      }
      else
      {
        v20 = (void *)((0xFFFFFFFFFFFFFFFFLL >> -(char)v39) & v18);
        if ( !v39 )
          v20 = nullptr;
        v38 = v20;
      }
      v21 = *(__int64 **)(a1 + 16);
      v22 = **(__int64 ***)(a1 + 32);
      v34 = *(_QWORD *)(a1 + 8);
      v23 = *(_DWORD *)(a1 + 40) != 0;
      v24 = sub_A63CE0(*(_QWORD **)(*(_QWORD *)a1 + 248LL));
      v13 = sub_1D6FEE0(*(_QWORD *)a1, **(_QWORD **)(a1 + 24), v15, (void ***)&v38, v24, v34, v23, v21, v22);
      if ( v39 > 0x40 && v38 )
        operator delete[](v38);
    }
    else
    {
      v25 = *(__int64 **)(a1 + 16);
      v26 = **(__int64 ***)(a1 + 32);
      v27 = *(_DWORD *)(a1 + 40) != 0;
      if ( (a7 & 1) != 0 )
        v33 = *(__int64 (__fastcall **)(_QWORD *))(*v8 + a7 - 1);
      v28 = v33(v8);
      return (unsigned int)sub_1D6FE90(*(_QWORD *)a1, **(_QWORD **)(a1 + 24), v15, v28, v35, v27, v25, v26);
    }
  }
  else
  {
    return 0;
  }
  return v13;
}
