_QWORD *__fastcall sub_245020(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v5; // eax
  _QWORD *v6; // rbx
  __int64 (__fastcall **v8)(); // [rsp+0h] [rbp-88h] BYREF
  int v9; // [rsp+8h] [rbp-80h]
  __int64 v10; // [rsp+10h] [rbp-78h]
  __int128 v11; // [rsp+18h] [rbp-70h]
  __int64 v12; // [rsp+28h] [rbp-60h]
  __int128 v13; // [rsp+30h] [rbp-58h]
  __int64 v14; // [rsp+40h] [rbp-48h]
  __int64 v15; // [rsp+48h] [rbp-40h]
  _QWORD v16[7]; // [rsp+50h] [rbp-38h] BYREF

  v16[1] = __readfsqword(0x28u);
  v9 = 2;
  v8 = off_4DA158;
  v10 = 0;
  v12 = 0;
  v14 = a3;
  v15 = a4;
  v16[0] = 0;
  v11 = 0;
  v13 = 0;
  copy_tinfo_t(v16, a5);
  v5 = sub_256750(&v8, a2, 0);
  v6 = (_QWORD *)(a2 + 48);
  *a1 = 0;
  if ( v5 == 1 )
    v6 = v16;
  copy_tinfo_t(a1, v6);
  v8 = off_4DA158;
  clear_tinfo_t(v16);
  v8 = off_4D63B8;
  if ( v12 )
  {
    *(_QWORD *)&v13 = 0;
    qfree(v12);
  }
  if ( v10 )
  {
    *(_QWORD *)&v11 = 0;
    qfree(v10);
  }
  return a1;
}
