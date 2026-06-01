__int64 __fastcall sub_1092D0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // eax
  unsigned int v7; // ebx
  int v9; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v10; // [rsp+8h] [rbp-A0h]
  __int64 v11; // [rsp+10h] [rbp-98h]
  __int64 v12; // [rsp+18h] [rbp-90h]
  __int128 v13; // [rsp+20h] [rbp-88h]
  int v14; // [rsp+30h] [rbp-78h]
  __int64 v15; // [rsp+38h] [rbp-70h]
  int v16; // [rsp+40h] [rbp-68h]
  char v17; // [rsp+48h] [rbp-60h]
  unsigned __int64 v18; // [rsp+4Ch] [rbp-5Ch]
  __int64 v19; // [rsp+58h] [rbp-50h]
  __int128 v20; // [rsp+60h] [rbp-48h]
  __int64 v21; // [rsp+70h] [rbp-38h]
  char v22; // [rsp+78h] [rbp-30h]
  unsigned __int64 v23; // [rsp+88h] [rbp-20h]

  v23 = __readfsqword(0x28u);
  v2 = sub_153DC0(*a2);
  if ( !v2 )
    return 7;
  v13 = 0;
  v18 = 0xFFFFFFFEFFFFFFFFLL;
  v9 = 0;
  v10 = 0;
  v11 = -1;
  v12 = 0;
  v14 = -1;
  v15 = 0;
  v16 = -1;
  v17 = 0;
  v19 = -1;
  v21 = 0xFFFFFFFFLL;
  v22 = 0;
  v20 = 0;
  v6 = ((__int64 (__fastcall *)(__int64, int *, __int64, __int64, __int64, __int64))sub_15EC40)(v2, &v9, 2, v3, v4, v5);
  if ( ((unsigned int)(v6 - 1) <= 2 || (v7 = 7, v6 == 5)) && (v7 = 3, (unsigned __int64)v13 <= 1) )
  {
    v7 = 7;
    if ( SHIDWORD(v18) >= -1 )
    {
LABEL_6:
      if ( v19 )
      {
        *(_QWORD *)&v20 = 0;
        qfree();
      }
    }
  }
  else if ( SHIDWORD(v18) >= -1 )
  {
    goto LABEL_6;
  }
  clear_tinfo_t();
  if ( v12 )
  {
    *(_QWORD *)&v13 = 0;
    qfree();
  }
  return v7;
}

