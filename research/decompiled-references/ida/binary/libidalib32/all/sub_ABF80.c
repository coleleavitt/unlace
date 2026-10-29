_QWORD *__fastcall sub_ABF80(_QWORD *a1, char a2)
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
  __int64 v19; // rbx
  _QWORD *v20; // rbp
  __int64 v21; // rax
  _QWORD *v22; // [rsp+0h] [rbp-68h] BYREF
  unsigned __int64 v23; // [rsp+8h] [rbp-60h]
  int v24; // [rsp+10h] [rbp-58h] BYREF
  __int64 v25; // [rsp+18h] [rbp-50h]
  __int128 v26; // [rsp+20h] [rbp-48h]
  unsigned __int64 v27; // [rsp+38h] [rbp-30h]

  v27 = __readfsqword(0x28u);
  v4 = sub_A17F0((__int64)a1);
  v5 = sub_A18B0(a1, 1);
  v22 = v5;
  v23 = v6;
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
         && (*((_DWORD *)sub_A17F0((__int64)&v22) + 3) != *((_DWORD *)v4 + 3)
          || !sub_A17F0((__int64)&v22)[3]
          || a2 && *((_DWORD *)sub_A17F0((__int64)&v22) + 4) == -1
          || !*((_DWORD *)sub_A17F0((__int64)&v22) + 4)) )
    {
      v16 = sub_A18B0(&v22, 1);
      v22 = v16;
      v23 = v17;
      if ( !v16 )
        break;
      v9 = v23;
      v7 = v16[15];
      v8 = v16[11];
      v11 = v16[12];
      v10 = v16[13];
      v12 = v16[10];
      v13 = v16[8];
    }
    if ( *((_DWORD *)v4 + 4) != -1 && v14 )
    {
      v24 = -2;
      v25 = -1;
      v26 = 0;
      v18 = sub_A17F0((__int64)&v22);
      if ( (unsigned __int8)sub_9E590((_QWORD *)v18[3], dword_24411C, (__int64)&v24, 0) )
      {
        v19 = v25;
      }
      else
      {
        v19 = *((unsigned int *)sub_A17F0((__int64)&v22) + 4);
        v25 = v19;
      }
      if ( v19 == 0xFFFFFFFFLL || *((_DWORD *)v4 + 4) != v19 )
      {
        v20 = (_QWORD *)*a1;
        v21 = sub_ABF40((_QWORD *)(*a1 + 96LL), (_QWORD *)(*a1 + 64LL));
        v22 = v20;
        v23 = v21;
      }
      if ( v24 >= -1 && v19 )
      {
        *(_QWORD *)&v26 = 0;
        qfree();
      }
    }
  }
  return v22;
}

