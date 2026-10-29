_QWORD *__fastcall sub_4C9190(__int64 a1, _QWORD *a2, __int64 a3, unsigned int a4, __int64 a5, __int64 a6)
{
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rdi
  unsigned int v15; // edx
  _QWORD *v16; // rax
  void (__fastcall ***v17)(_QWORD); // r14
  _QWORD *v18; // r12
  __int64 v19; // r13
  _QWORD *v20; // rbx
  unsigned int *v23; // [rsp+18h] [rbp-38h] BYREF

  v11 = *(_QWORD *)(a3 + 16);
  v23 = nullptr;
  if ( v11 )
  {
    v12 = *(unsigned int *)(v11 - 4);
    v13 = a2[2];
    if ( v13 )
    {
LABEL_3:
      v14 = *(unsigned int *)(v13 - 4);
      goto LABEL_4;
    }
  }
  else
  {
    v13 = a2[2];
    v12 = 0;
    if ( v13 )
      goto LABEL_3;
  }
  v14 = 0;
LABEL_4:
  sub_647A70(v14, v12, &v23);
  if ( v23 )
    v15 = *(v23 - 1);
  else
    v15 = 0;
  v16 = sub_4C9050(a1, (__int64)a2, a3, a4, a5, a6, v15, v23, 0);
  v17 = (void (__fastcall ***)(_QWORD))v16;
  if ( !v16 )
  {
LABEL_15:
    v20 = nullptr;
    goto LABEL_11;
  }
  v18 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _QWORD *, __int64))(*v16 + 16LL))(v16, a2, a3);
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD *))(*a2 + 80LL))(a2, v18) )
  {
    if ( *(_DWORD *)(v18[1] + 32LL) != 3 )
    {
      v19 = sub_4C4940(a1, (__int64)a2, (__int64)v18, 0);
      if ( v19 )
      {
        v20 = (_QWORD *)sub_186B270(0x18u);
        *v20 = &off_1C4EE40;
        v20[1] = v17;
        v20[2] = v19;
        sub_4D63B0(v18);
        goto LABEL_11;
      }
    }
    sub_4D63B0(v18);
    (**v17)(v17);
    sub_186B220(v17);
    goto LABEL_15;
  }
  v20 = (_QWORD *)sub_186B270(0x18u);
  *v20 = &off_1C4EE40;
  v20[1] = v17;
  v20[2] = 0;
  if ( v18 )
    sub_4D63B0(v18);
LABEL_11:
  if ( v23 )
    sub_186B220(v23 - 2);
  return v20;
}

