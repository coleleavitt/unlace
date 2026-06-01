__int64 __fastcall sub_F70FC0(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __m128i a6,
        __m128i a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  __int64 result; // rax
  __int64 v12; // r9
  int v13; // eax
  int v14; // eax
  int v15; // eax
  unsigned __int64 v16; // [rsp+10h] [rbp-28h]
  unsigned __int64 v17; // [rsp+10h] [rbp-28h]
  unsigned __int64 v18; // [rsp+10h] [rbp-28h]
  unsigned int v19; // [rsp+1Ch] [rbp-1Ch]
  unsigned int v20; // [rsp+1Ch] [rbp-1Ch]
  unsigned int v21; // [rsp+1Ch] [rbp-1Ch]

  if ( (a9 & 0x7FFFFFFF) != 9 || (result = 1, HIDWORD(a9)) )
  {
    result = 0;
    v12 = *(_BYTE *)(a2 + 28) & 0x7F;
    if ( (_BYTE)v12 == 67 )
    {
      if ( (*(_QWORD *)(a2 + 72) & 0xFFFFFFFFFFFFFFF8LL) == 0 )
        return result;
      if ( !(_BYTE)byte_2CCC480 )
      {
        v19 = a5;
        v16 = a4;
        v13 = __cxa_guard_acquire(&byte_2CCC480);
        a4 = v16;
        a5 = v19;
        if ( v13 )
        {
          qword_2CCC4A0 &= 0xFFFFFFFE00000000LL;
          qword_2CCC4A8 = 0;
          qword_2CCC4B8 = 0;
          __cxa_guard_release(&byte_2CCC480);
          a4 = v16;
          a5 = v19;
        }
      }
    }
    else if ( (_BYTE)v12 == 68 )
    {
      if ( (*(_QWORD *)(a2 + 72) & 0xFFFFFFFFFFFFFFF8LL) == 0 )
        return result;
      if ( !(_BYTE)byte_2CCC408 )
      {
        v20 = a5;
        v17 = a4;
        v14 = __cxa_guard_acquire(&byte_2CCC408);
        a4 = v17;
        a5 = v20;
        if ( v14 )
        {
          qword_2CCC420 &= 0xFFFFFFFE00000000LL;
          qword_2CCC428 = 0;
          qword_2CCC438 = 0;
          __cxa_guard_release(&byte_2CCC408);
          a4 = v17;
          a5 = v20;
        }
      }
    }
    else
    {
      if ( (_BYTE)v12 != 47 || (*(_QWORD *)(a2 + 72) & 0xFFFFFFFFFFFFFFF8LL) == 0 )
        return result;
      if ( !(_BYTE)byte_2CCC440 )
      {
        v21 = a5;
        v18 = a4;
        v15 = __cxa_guard_acquire(&byte_2CCC440);
        a4 = v18;
        a5 = v21;
        if ( v15 )
        {
          qword_2CCC460 &= 0xFFFFFFFE00000000LL;
          qword_2CCC468 = 0;
          qword_2CCC478 = 0;
          __cxa_guard_release(&byte_2CCC440);
          a4 = v18;
          a5 = v21;
        }
      }
    }
    return sub_F70000(a1, a3, a4, a5, a5, v12, a6, a9, a7, a10);
  }
  return result;
}
