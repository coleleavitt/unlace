_QWORD *__fastcall sub_219340(_QWORD *a1, char a2)
{
  __int64 *v4; // rbp
  _QWORD *v5; // rax
  unsigned __int64 v6; // rdx
  __int64 v7; // r9
  __int64 v8; // r10
  unsigned __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rdi
  bool v14; // r12
  _QWORD *v16; // rax
  unsigned __int64 v17; // rdx
  __int64 *v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rbx
  _QWORD *v21; // rbp
  __int64 v22; // rax
  _QWORD *v23; // [rsp+0h] [rbp-68h] BYREF
  unsigned __int64 v24; // [rsp+8h] [rbp-60h]
  int v25; // [rsp+10h] [rbp-58h] BYREF
  __int64 v26; // [rsp+18h] [rbp-50h]
  __int128 v27; // [rsp+20h] [rbp-48h]
  unsigned __int64 v28; // [rsp+38h] [rbp-30h]

  v28 = __readfsqword(0x28u);
  v4 = sub_210380((__int64)a1);
  v5 = sub_210430(a1, 1);
  v23 = v5;
  v24 = v6;
  if ( v5 )
  {
    v7 = v5[15];
    v8 = v5[11];
    v9 = v6;
    v10 = v5[13];
    v11 = v5[12];
    v12 = v5[10];
    v13 = v5[8];
    v14 = v9 < 16 * ((unsigned __int64)(v7 == 0) + ((v7 - v8) >> 3) - 1) + ((v12 - v13) >> 5) + ((v11 - v10) >> 5);
    while ( v9 < ((v12 - v13) >> 5) + ((v11 - v10) >> 5) + 16 * ((unsigned __int64)(v7 == 0) + ((v7 - v8) >> 3) - 1)
         && (*((_DWORD *)sub_210380((__int64)&v23) + 3) != *((_DWORD *)v4 + 3)
          || !sub_210380((__int64)&v23)[3]
          || a2 && sub_210380((__int64)&v23)[2] == -1
          || !sub_210380((__int64)&v23)[2]) )
    {
      v16 = sub_210430(&v23, 1);
      v23 = v16;
      v24 = v17;
      if ( !v16 )
        break;
      v9 = v24;
      v7 = v16[15];
      v8 = v16[11];
      v11 = v16[12];
      v10 = v16[13];
      v12 = v16[10];
      v13 = v16[8];
    }
    if ( v4[2] != -1 && v14 )
    {
      v25 = -2;
      v26 = -1;
      v27 = 0;
      v18 = sub_210380((__int64)&v23);
      v19 = (unsigned int)dword_8BA594;
      if ( (unsigned __int8)sub_20D210((_QWORD *)v18[3], dword_8BA594, (__int64)&v25, 0) )
      {
        v20 = v26;
      }
      else
      {
        v20 = sub_210380((__int64)&v23)[2];
        v26 = v20;
      }
      if ( v20 == -1 || v4[2] != v20 )
      {
        v21 = (_QWORD *)*a1;
        v19 = *a1 + 64LL;
        v22 = sub_219300((_QWORD *)(*a1 + 96LL), (_QWORD *)v19);
        v23 = v21;
        v24 = v22;
      }
      if ( v25 >= -1 && v20 )
      {
        *(_QWORD *)&v27 = 0;
        qfree(v20, (const char *)v19);
      }
    }
  }
  return v23;
}
