__int64 __fastcall sub_393FC0(
        double a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        double a5,
        double a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        const char *a10)
{
  unsigned int v10; // eax
  __int64 v11; // rdx
  unsigned int v12; // ebp
  __int64 v13; // r12
  __int64 v14; // rbx
  __int64 *v15; // rax
  __int64 v16; // rdi
  __int64 (__fastcall **v18)(); // [rsp+0h] [rbp-48h] BYREF
  __int64 v19; // [rsp+8h] [rbp-40h]
  __int128 v20; // [rsp+10h] [rbp-38h]
  unsigned __int64 v21; // [rsp+28h] [rbp-20h]

  v21 = __readfsqword(0x28u);
  v20 = 0;
  v19 = 0;
  v18 = struc_stroff_data_t___vtable;
  v10 = sub_393E30((__int64)&v18, 0.0, a2, a3, a4, a5, a6, a7, a8);
  v11 = v19;
  v18 = struc_stroff_data_t___vtable;
  v12 = v10;
  if ( v19 )
  {
    v13 = v20;
    if ( (_QWORD)v20 )
    {
      v14 = 0;
      do
      {
        v15 = (__int64 *)(v11 + 24 * v14);
        v16 = *v15;
        if ( *v15 )
        {
          v15[1] = 0;
          qfree(v16, a10);
          v11 = v19;
        }
        ++v14;
      }
      while ( v13 != v14 );
    }
    *(_QWORD *)&v20 = 0;
    qfree(v11, a10);
  }
  return v12;
}
