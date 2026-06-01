__int64 __fastcall sub_109560(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // eax
  unsigned int v7; // ebx
  int v9; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v10; // [rsp+8h] [rbp-B0h]
  __int64 v11; // [rsp+10h] [rbp-A8h]
  int v12; // [rsp+18h] [rbp-A0h]
  __int64 v13; // [rsp+20h] [rbp-98h]
  __int128 v14; // [rsp+28h] [rbp-90h]
  __m128i si128; // [rsp+38h] [rbp-80h]
  int v16; // [rsp+48h] [rbp-70h]
  char v17; // [rsp+50h] [rbp-68h]
  __int64 v18; // [rsp+58h] [rbp-60h]
  int v19; // [rsp+60h] [rbp-58h]
  __int64 v20; // [rsp+68h] [rbp-50h]
  __int128 v21; // [rsp+70h] [rbp-48h]
  __int64 v22; // [rsp+80h] [rbp-38h]
  char v23; // [rsp+88h] [rbp-30h]
  unsigned __int64 v24; // [rsp+98h] [rbp-20h]

  v24 = __readfsqword(0x28u);
  v2 = sub_1545C0(*a2);
  if ( !v2 )
    return 7;
  v14 = 0;
  v9 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_1D2FF0);
  v10 = 0;
  v11 = -1;
  v12 = -1;
  v13 = 0;
  v16 = -1;
  v17 = 0;
  v18 = -1;
  v19 = -2;
  v20 = -1;
  v22 = 0xFFFFFFFFLL;
  v23 = 0;
  v21 = 0;
  v6 = ((__int64 (__fastcall *)(__int64, int *, __int64, __int64, __int64, __int64))sub_15F500)(v2, &v9, 2, v3, v4, v5);
  if ( ((unsigned int)(v6 - 1) <= 2 || (v7 = 7, v6 == 5)) && (v7 = 3, (unsigned __int64)v14 <= 1) )
  {
    v7 = 7;
    if ( v19 >= -1 )
    {
LABEL_6:
      if ( v20 )
      {
        *(_QWORD *)&v21 = 0;
        qfree();
      }
    }
  }
  else if ( v19 >= -1 )
  {
    goto LABEL_6;
  }
  clear_tinfo_t();
  if ( v13 )
  {
    *(_QWORD *)&v14 = 0;
    qfree();
  }
  return v7;
}

