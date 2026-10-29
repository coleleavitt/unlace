__int64 __fastcall sub_1F9600(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  const char *v4; // rsi
  unsigned int index; // ebp
  __int64 v7; // [rsp+8h] [rbp-60h] BYREF
  __int128 v8; // [rsp+10h] [rbp-58h] BYREF
  __int64 v9; // [rsp+20h] [rbp-48h]
  __int64 v10; // [rsp+28h] [rbp-40h]
  __int64 v11; // [rsp+30h] [rbp-38h]
  __int64 v12; // [rsp+38h] [rbp-30h]
  unsigned __int64 v13; // [rsp+48h] [rbp-20h]

  v2 = *a1;
  v13 = __readfsqword(0x28u);
  v8 = 0;
  v4 = (const char *)&v7;
  v9 = 0;
  v10 = -1;
  v11 = 0;
  v12 = 0;
  index = -1;
  if ( (*(unsigned __int8 (__fastcall **)(__int64 *, __int64 *, __int128 *, __int64, _QWORD))(v2 + 680))(
         a1,
         &v7,
         &v8,
         a2,
         0) )
  {
    v4 = (const char *)a1[91];
    index = bookmarks_t_find_index(v7, v4);
  }
  if ( v12 )
    qfree(v12, v4);
  return index;
}
