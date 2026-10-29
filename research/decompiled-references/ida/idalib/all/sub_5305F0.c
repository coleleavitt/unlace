__int64 __fastcall sub_5305F0(__int64 a1, __int64 a2, __int16 a3)
{
  __int16 v3; // r12
  __int64 v6; // rax
  __int64 i; // rsi
  unsigned __int64 v8; // r13
  void *v9; // rax
  __int64 v10; // rsi
  __int64 v12; // rax
  _QWORD *v13; // r12
  __int64 v14; // r14
  _QWORD *v15; // r15
  void *v16; // rdi
  __int64 v17; // rax
  _QWORD *v18; // r14
  _QWORD *v19; // [rsp+10h] [rbp-A8h]
  _QWORD *v20; // [rsp+18h] [rbp-A0h]
  _QWORD *v21; // [rsp+20h] [rbp-98h]
  __int64 v22; // [rsp+28h] [rbp-90h]
  __int64 v24; // [rsp+38h] [rbp-80h]
  __int64 v25; // [rsp+40h] [rbp-78h] BYREF
  unsigned __int64 v26; // [rsp+48h] [rbp-70h] BYREF
  __int64 v27; // [rsp+50h] [rbp-68h] BYREF
  char v28; // [rsp+58h] [rbp-60h]
  void *ptr; // [rsp+60h] [rbp-58h] BYREF
  __int128 v30; // [rsp+68h] [rbp-50h]
  unsigned __int64 v31; // [rsp+78h] [rbp-40h]

  v3 = a3 & 0xFFDE | 0x20;
  v31 = __readfsqword(0x28u);
  v21 = *(_QWORD **)(*(_QWORD *)a1 + 1672LL);
  v6 = *(unsigned int *)(a2 + 8);
  if ( (_DWORD)v6 )
  {
    for ( i = *(_QWORD *)a1; ; i = *(_QWORD *)a1 )
    {
      sub_52F060(*(__int64 **)(i + 1872), a2, (_QWORD *)(*(_QWORD *)(a2 + 16) + 32 * v6 - 32), v3);
      v6 = *(unsigned int *)(a2 + 8);
      if ( !(_DWORD)v6 )
        break;
    }
  }
  v8 = *(_QWORD *)a2;
  if ( (a3 & 0x400) == 0 || (a3 & 1) != 0 )
  {
    v12 = *(_QWORD *)a1;
    v28 = 0;
    v27 = -1;
    v13 = *(_QWORD **)(v12 + 1672);
    v22 = v12;
    v24 = *(_QWORD *)(v12 + 1808);
    sub_4108F0(v13, (__int64)&v27, v8);
    v14 = v27;
    if ( v27 == -1 )
    {
LABEL_18:
      if ( (*(_BYTE *)(a2 + 28) & 0x40) != 0 )
      {
        if ( (a3 & 0x400) != 0 )
          goto LABEL_7;
      }
      else
      {
        if ( (a3 & 0x400) != 0 )
          goto LABEL_7;
        sub_6C01A0(v21, v8);
      }
      ptr = (void *)sub_3BDD60(v21, v8);
      sub_7BF0F0((int)&ptr);
      goto LABEL_7;
    }
    while ( 1 )
    {
      if ( sub_3BD540((__int64)v13, v14) )
        goto LABEL_12;
      v25 = 0;
      v15 = *(_QWORD **)(v22 + 1872);
      v30 = 0;
      ptr = nullptr;
      v20 = *(_QWORD **)(*v15 + 1808LL);
      v19 = *(_QWORD **)(*v20 + 1672LL);
      if ( (unsigned __int8)sub_6B9E00(v19, &ptr, v14) )
      {
        if ( !(_QWORD)v30 )
        {
          v16 = ptr;
          if ( ptr )
            goto LABEL_17;
          goto LABEL_12;
        }
        v17 = v30 - 1;
      }
      else
      {
        v26 = sub_3BDD60(v19, v14);
        v17 = sub_7BF130(&v26, *v20, &ptr);
      }
      if ( v17 > 0 )
      {
        v18 = sub_530470(v15, &v25, ptr);
        if ( ptr )
        {
          *(_QWORD *)&v30 = 0;
          qfree(ptr);
        }
        if ( v18 && (*(_BYTE *)(v25 + 28) & 0x40) == 0 )
          sub_52F740(v24, v25, v18);
        goto LABEL_12;
      }
      if ( ptr )
      {
        *(_QWORD *)&v30 = 0;
        v16 = ptr;
LABEL_17:
        qfree(v16);
      }
LABEL_12:
      sub_410A70(v13, (__int64)&v27, v8);
      v14 = v27;
      if ( v27 == -1 )
        goto LABEL_18;
    }
  }
LABEL_7:
  v9 = (void *)sub_3BDD60(v21, v8);
  v10 = *(_QWORD *)a1;
  ptr = v9;
  sub_7BEF80(&ptr, v10, 0, 77);
  sub_52EAC0(a1, (unsigned __int64 *)a2);
  if ( (a3 & 0x10) != 0 )
    sub_530100(a1, v8);
  return 1;
}
