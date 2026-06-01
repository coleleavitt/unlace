__int64 __fastcall sub_A7170(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  signed int v3; // r11d
  unsigned int v4; // r11d
  char v5; // al
  __int64 v6; // rdx
  __int64 v7; // r12
  unsigned int v8; // ebp
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v12; // [rsp+0h] [rbp-38h] BYREF
  __int128 v13; // [rsp+8h] [rbp-30h]
  unsigned __int64 v14; // [rsp+18h] [rbp-20h]

  v2 = *(int *)(a1 + 40);
  v14 = __readfsqword(0x28u);
  v3 = *(_DWORD *)(a1 + 8);
  v12 = 0;
  v13 = 0;
  if ( v3 < 0
    || v3 >= (int)(16 * ((qword_250ED8 == 0) + (unsigned int)((qword_250ED8 - qword_250EB8) >> 3) - 1)
                 + ((qword_250EB0 - qword_250EA0) >> 5)
                 + ((qword_250EC0 - qword_250EC8) >> 5))
    || !*(_DWORD *)(sub_A0850((__int64)xmmword_250E60, v3) + 8) )
  {
    return 3;
  }
  v5 = sub_A4240(v4, &v12);
  v6 = v12;
  if ( v5 && (v2 & 0x80000000) == 0LL && v2 < (unsigned __int64)v13 )
  {
    *(_DWORD *)(a2 + 8) = *(_DWORD *)(v12 + 32 * v2);
    if ( !v6 )
      return 0;
    v7 = v13;
    v8 = 0;
    goto LABEL_9;
  }
  if ( !v12 )
    return 3;
  v7 = v13;
  v8 = 3;
  if ( (_QWORD)v13 )
  {
LABEL_9:
    v9 = 0;
    do
    {
      v10 = v6 + 32 * v9;
      if ( *(_QWORD *)(v10 + 8) )
      {
        *(_QWORD *)(v10 + 16) = 0;
        qfree();
        v6 = v12;
      }
      ++v9;
    }
    while ( v9 != v7 );
  }
  *(_QWORD *)&v13 = 0;
  qfree();
  return v8;
}

