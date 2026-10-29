__int64 __fastcall sub_4A3A00(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5, int a6)
{
  unsigned int v6; // ebx
  unsigned int v8; // [rsp+Ch] [rbp-4Ch] BYREF
  __int128 v9; // [rsp+10h] [rbp-48h] BYREF
  __int64 v10; // [rsp+20h] [rbp-38h]
  __int64 v11; // [rsp+28h] [rbp-30h]
  __int64 v12; // [rsp+30h] [rbp-28h]
  void *ptr; // [rsp+38h] [rbp-20h]
  unsigned __int64 v14; // [rsp+48h] [rbp-10h]

  v14 = __readfsqword(0x28u);
  v8 = a3;
  v10 = 0;
  v11 = -1;
  v12 = 0;
  ptr = nullptr;
  v9 = 0;
  if ( (unsigned __int8)sub_4A3920(a1, (__int64)&v9, a2, &v8, a5, a6) )
    v6 = (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)ptr + 8LL))(ptr, *(_QWORD *)(a1 + 16));
  else
    v6 = -1;
  if ( ptr )
    qfree(ptr);
  return v6;
}

