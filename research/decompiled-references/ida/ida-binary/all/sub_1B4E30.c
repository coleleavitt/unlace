__int64 __fastcall sub_1B4E30(
        __m128 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        double a5,
        double a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11)
{
  unsigned int v11; // ebx
  __int64 user_idadir; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __m128 v18; // xmm4
  __m128 v19; // xmm5
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __m128 v25; // xmm4
  __m128 v26; // xmm5
  char v27[4096]; // [rsp+0h] [rbp-3038h] BYREF
  _BYTE v28[4096]; // [rsp+1000h] [rbp-2038h] BYREF
  _BYTE v29[4104]; // [rsp+2000h] [rbp-1038h] BYREF
  unsigned __int64 v30; // [rsp+3008h] [rbp-30h]

  v11 = 1;
  v30 = __readfsqword(0x28u);
  user_idadir = get_user_idadir();
  if ( user_idadir )
  {
    qmakepath(v27, 4096, user_idadir, "themes", 0);
    qmakepath(v28, 4096, v27, a10, 0);
    qmakepath(v29, 4096, v28, "user.css", 0);
    if ( *(_QWORD *)(a11 + 8) <= 1u )
    {
      if ( (unsigned __int8)qfileexist(v29) )
      {
        if ( (debug & 0x1000000) != 0 )
          sub_16B860(
            (int)"Themes: Removing user overrides file: \"%s\"\n",
            (__int64)v29,
            v21,
            v22,
            v23,
            v24,
            a1,
            a2,
            a3,
            a4,
            v25,
            v26,
            a7,
            a8,
            v27[0]);
        LOBYTE(v11) = (unsigned int)qunlink(v29) == 0;
      }
    }
    else
    {
      if ( (debug & 0x1000000) != 0 )
        sub_16B860(
          (int)"Themes: Saving overrides to \"%s\"\n",
          (__int64)v29,
          v14,
          v15,
          v16,
          v17,
          a1,
          a2,
          a3,
          a4,
          v18,
          v19,
          a7,
          a8,
          v27[0]);
      if ( (unsigned __int8)qisdir(v27) || !(unsigned int)qmkdir(v27, 511) )
      {
        if ( (unsigned __int8)qisdir(v28) || !(unsigned int)qmkdir(v28, 511) )
          return (unsigned int)sub_1B4DA0(a11, (__int64)v29);
        else
          return 0;
      }
      else
      {
        return 0;
      }
    }
  }
  return v11;
}
