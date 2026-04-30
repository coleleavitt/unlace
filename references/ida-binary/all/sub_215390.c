__int64 __fastcall sub_215390(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  unsigned int v4; // r11d
  char v5; // al
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r12
  unsigned int v11; // ebp
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v16; // [rsp+0h] [rbp-38h] BYREF
  __int128 v17; // [rsp+8h] [rbp-30h]
  unsigned __int64 v18; // [rsp+18h] [rbp-20h]

  v2 = *(_QWORD *)(a1 + 40);
  v18 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 8);
  v16 = 0;
  v17 = 0;
  if ( (int)v3 < 0
    || (int)v3 >= (int)(16 * ((qword_8CBB18 == 0) + (unsigned int)((qword_8CBB18 - qword_8CBAF8) >> 3) - 1)
                      + ((qword_8CBAF0 - qword_8CBAE0) >> 5)
                      + ((qword_8CBB00 - qword_8CBB08) >> 5))
    || !*(_DWORD *)(sub_20F460((__int64)qword_8CBAA0, v3) + 8) )
  {
    return 3;
  }
  v5 = sub_212FD0(v4, &v16);
  v9 = v16;
  if ( v5 && (int)v2 >= 0 && (int)v2 < (unsigned __int64)v17 )
  {
    *(_QWORD *)(a2 + 8) = *(_QWORD *)(v16 + 32LL * (int)v2);
    if ( !v9 )
      return 0;
    v10 = v17;
    v11 = 0;
    goto LABEL_9;
  }
  if ( !v16 )
    return 3;
  v10 = v17;
  v11 = 3;
  if ( (_QWORD)v17 )
  {
LABEL_9:
    v12 = 0;
    do
    {
      v13 = v9 + 32 * v12;
      v14 = *(_QWORD *)(v13 + 8);
      if ( v14 )
      {
        *(_QWORD *)(v13 + 16) = 0;
        qfree(v14, (const char *)&v16);
        v9 = v16;
      }
      ++v12;
    }
    while ( v12 != v10 );
  }
  qfree(v9, (const char *)&v16, v9, v6, v7, v8, v16, 0, *((_QWORD *)&v17 + 1), v18);
  return v11;
}
