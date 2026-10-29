__int64 __fastcall sub_4A2C90(__int64 a1, __int64 a2, int a3, __int64 a4, int a5)
{
  __int64 v7; // r15
  unsigned int place_class_id; // eax
  __int64 place_class; // r8
  unsigned int v10; // ebx
  _DWORD v12[3]; // [rsp+Ch] [rbp-47Ch] BYREF
  _BYTE *v13; // [rsp+18h] [rbp-470h] BYREF
  void *ptr; // [rsp+20h] [rbp-468h] BYREF
  __int128 v15; // [rsp+28h] [rbp-460h]
  _BYTE v16[1032]; // [rsp+40h] [rbp-448h] BYREF
  unsigned __int64 v17; // [rsp+448h] [rbp-40h]

  v12[0] = a3;
  v17 = __readfsqword(0x28u);
  v15 = 0;
  ptr = nullptr;
  v7 = sub_79BFB0(v12, a1, a4, v16, 1024, 72);
  sub_79C010(v12, a1, &ptr, a4, 80);
  if ( (unsigned __int64)v15 > 1
    && (place_class_id = get_place_class_id(ptr), (place_class = get_place_class(0, 0, place_class_id)) != 0) )
  {
    v13 = v16;
    v10 = sub_4A1220(
            *(_QWORD *)(qword_2CA1698 + 1480),
            a2,
            (const void **)&v13,
            (unsigned __int64)&v16[v7],
            place_class,
            a5);
  }
  else
  {
    v10 = 0;
  }
  if ( ptr )
  {
    *(_QWORD *)&v15 = 0;
    qfree(ptr);
  }
  return v10;
}

