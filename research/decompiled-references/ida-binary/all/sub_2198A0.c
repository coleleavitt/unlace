_QWORD *__fastcall sub_2198A0(_QWORD *a1)
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
  __int64 v21; // rsi
  __int64 v22; // rbx
  _QWORD *v23; // rbx
  __int64 v24; // rax
  unsigned __int64 v25; // [rsp+0h] [rbp-98h]
  __int64 v26; // [rsp+8h] [rbp-90h]
  __int64 v27; // [rsp+10h] [rbp-88h]
  __int64 v28; // [rsp+18h] [rbp-80h]
  _QWORD *v29; // [rsp+20h] [rbp-78h] BYREF
  unsigned __int64 v30; // [rsp+28h] [rbp-70h]
  int v31; // [rsp+30h] [rbp-68h] BYREF
  __int64 v32; // [rsp+38h] [rbp-60h]
  __int128 v33; // [rsp+40h] [rbp-58h]
  unsigned __int64 v34; // [rsp+58h] [rbp-40h]

  v34 = __readfsqword(0x28u);
  v2 = sub_210380((__int64)a1);
  v3 = sub_2104F0(a1, 1);
  v29 = v3;
  v30 = v4;
  if ( v3 )
  {
    v5 = v3[10];
    v25 = v4;
    v6 = v4;
    v7 = v3[15];
    v8 = v3[11];
    v9 = v3[13];
    v27 = v5;
    v26 = v3[12];
    v10 = v8;
    v11 = v7;
    v28 = v3[8];
    v12 = v28;
    v13 = v9;
    v14 = v26;
    while ( 1 )
    {
      if ( v6 >= 16 * ((unsigned __int64)(v11 == 0) + ((v11 - v10) >> 3) - 1) + ((v5 - v12) >> 5) + ((v14 - v13) >> 5) )
      {
LABEL_4:
        if ( *((_DWORD *)v2 + 2) != 1 )
          return v29;
        goto LABEL_12;
      }
      if ( *((_DWORD *)sub_210380((__int64)&v29) + 3) == *((_DWORD *)v2 + 3)
        && sub_210380((__int64)&v29)[3]
        && sub_210380((__int64)&v29)[2] != -1 )
      {
        break;
      }
      v16 = sub_2104F0(&v29, 1);
      v18 = v17;
      v29 = v16;
      v19 = v16;
      v30 = v18;
      if ( !v16 )
        goto LABEL_4;
      v6 = v30;
      v14 = v19[12];
      v13 = v19[13];
      v5 = v19[10];
      v12 = v19[8];
      v11 = v19[15];
      v10 = v19[11];
    }
    if ( *((_DWORD *)v2 + 2) != 1 )
      return v29;
LABEL_12:
    if ( v25 < 16 * ((unsigned __int64)(v7 == 0) + ((v7 - v8) >> 3) - 1) + ((v27 - v28) >> 5) + ((v26 - v9) >> 5)
      && v2[3] )
    {
      v33 = 0;
      v20 = (_QWORD *)v2[3];
      v21 = (unsigned int)dword_8BA594;
      v31 = -2;
      v32 = -1;
      if ( (unsigned __int8)sub_20D210(v20, dword_8BA594, (__int64)&v31, 0) )
      {
        v22 = v32;
      }
      else
      {
        v22 = v2[2];
        v32 = v22;
      }
      if ( v22 == -1 || sub_210380((__int64)&v29)[2] != v22 )
      {
        v23 = (_QWORD *)*a1;
        v21 = *a1 + 64LL;
        v24 = sub_219300((_QWORD *)(*a1 + 96LL), (_QWORD *)v21);
        v29 = v23;
        v30 = v24;
      }
      if ( v31 >= -1 && v32 )
      {
        *(_QWORD *)&v33 = 0;
        qfree(v32, (const char *)v21);
      }
    }
  }
  return v29;
}
