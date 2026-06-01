unsigned __int64 __fastcall sub_599280(__int64 a1, _DWORD *a2, int a3, int a4, int a5)
{
  __int64 v6; // rcx
  int v8; // eax
  const char *v9; // rcx
  _DWORD v11[4]; // [rsp+4h] [rbp-5Ch] BYREF
  int v12; // [rsp+14h] [rbp-4Ch] BYREF
  void *ptr; // [rsp+18h] [rbp-48h] BYREF
  __int128 v14; // [rsp+20h] [rbp-40h]
  unsigned __int64 v15; // [rsp+30h] [rbp-30h]

  v6 = (unsigned int)*a2;
  v11[0] = a3;
  v15 = __readfsqword(0x28u);
  v14 = 0;
  ptr = nullptr;
  sub_79B6F0(v11, a1, &ptr, v6, 83);
  sub_79B4D0(v11, a1, (unsigned int)*a2, 65);
  sub_79B4D0(v11, a1, (unsigned int)*a2, 83);
  v8 = a4 + *a2;
  *a2 = v8;
  v12 = v8;
  sub_79B440(v11, a1, (unsigned int)(a5 + 1), &v12, 4, 73);
  v9 = haystack;
  if ( (_QWORD)v14 )
    v9 = (const char *)ptr;
  sub_79B440(v11, a1, (unsigned int)*a2, v9, 0, 83);
  if ( ptr )
  {
    *(_QWORD *)&v14 = 0;
    qfree(ptr);
  }
  return v15 - __readfsqword(0x28u);
}

