_QWORD *__fastcall sub_ACB20(_QWORD *a1)
{
  __int64 *v2; // rbp
  _QWORD *v3; // rax
  unsigned __int64 v4; // rdx
  __int64 v5; // r9
  unsigned __int64 v6; // rcx
  __int64 v7; // r13
  __int64 v8; // r15
  __int64 v9; // r14
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // r8
  __int64 v13; // r10
  __int64 v14; // rax
  _QWORD *v16; // rcx
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rax
  _QWORD *v19; // rdx
  _QWORD *v20; // rdi
  __int64 v21; // rbx
  _QWORD *v22; // rbx
  __int64 v23; // rax
  unsigned __int64 v24; // [rsp+0h] [rbp-98h]
  __int64 v25; // [rsp+8h] [rbp-90h]
  __int64 v26; // [rsp+10h] [rbp-88h]
  __int64 v27; // [rsp+18h] [rbp-80h]
  _QWORD *v28; // [rsp+20h] [rbp-78h] BYREF
  unsigned __int64 v29; // [rsp+28h] [rbp-70h]
  int v30; // [rsp+30h] [rbp-68h] BYREF
  __int64 v31; // [rsp+38h] [rbp-60h]
  __int128 v32; // [rsp+40h] [rbp-58h]
  unsigned __int64 v33; // [rsp+58h] [rbp-40h]

  v33 = __readfsqword(0x28u);
  v2 = sub_A19D0((__int64)a1);
  v3 = sub_A1B40(a1, 1);
  v28 = v3;
  v29 = v4;
  if ( v3 )
  {
    v5 = v3[10];
    v24 = v4;
    v6 = v4;
    v7 = v3[15];
    v8 = v3[11];
    v9 = v3[13];
    v26 = v5;
    v25 = v3[12];
    v10 = v8;
    v11 = v7;
    v27 = v3[8];
    v12 = v27;
    v13 = v9;
    v14 = v25;
    while ( 1 )
    {
      if ( v6 >= 16 * ((unsigned __int64)(v11 == 0) + ((v11 - v10) >> 3) - 1) + ((v5 - v12) >> 5) + ((v14 - v13) >> 5) )
      {
LABEL_4:
        if ( *((_DWORD *)v2 + 2) != 1 )
          return v28;
        goto LABEL_12;
      }
      if ( *((_DWORD *)sub_A19D0((__int64)&v28) + 3) == *((_DWORD *)v2 + 3)
        && sub_A19D0((__int64)&v28)[3]
        && sub_A19D0((__int64)&v28)[2] != -1 )
      {
        break;
      }
      v16 = sub_A1B40(&v28, 1);
      v18 = v17;
      v28 = v16;
      v19 = v16;
      v29 = v18;
      if ( !v16 )
        goto LABEL_4;
      v6 = v29;
      v14 = v19[12];
      v13 = v19[13];
      v5 = v19[10];
      v12 = v19[8];
      v11 = v19[15];
      v10 = v19[11];
    }
    if ( *((_DWORD *)v2 + 2) != 1 )
      return v28;
LABEL_12:
    if ( v24 < 16 * ((unsigned __int64)(v7 == 0) + ((v7 - v8) >> 3) - 1) + ((v26 - v27) >> 5) + ((v25 - v9) >> 5)
      && v2[3] )
    {
      v32 = 0;
      v20 = (_QWORD *)v2[3];
      v30 = -2;
      v31 = -1;
      if ( (unsigned __int8)sub_9E6D0(v20, dword_245174, (__int64)&v30, 0) )
      {
        v21 = v31;
      }
      else
      {
        v21 = v2[2];
        v31 = v21;
      }
      if ( v21 == -1 || sub_A19D0((__int64)&v28)[2] != v21 )
      {
        v22 = (_QWORD *)*a1;
        v23 = sub_AC580((_QWORD *)(*a1 + 96LL), (_QWORD *)(*a1 + 64LL));
        v28 = v22;
        v29 = v23;
      }
      if ( v30 >= -1 && v31 )
      {
        *(_QWORD *)&v32 = 0;
        qfree();
      }
    }
  }
  return v28;
}

