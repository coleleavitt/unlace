__int64 __fastcall sub_8F800(__int64 a1)
{
  unsigned int v1; // ebp
  __int64 v2; // rbx
  __int64 v4; // rbx
  void *v5; // r13
  void *v6; // rdi
  const void *v7; // r13
  void *v8; // rdi
  unsigned __int16 v9; // [rsp+6h] [rbp-4Ah] BYREF
  void *src; // [rsp+8h] [rbp-48h] BYREF
  __int128 v11; // [rsp+10h] [rbp-40h]
  unsigned __int64 v12; // [rsp+20h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  v11 = 0;
  src = nullptr;
  if ( sub_163660(*(_QWORD *)(a1 + 8), &src) <= 0 )
  {
    v4 = xmmword_2508F8;
    if ( (unsigned __int64)xmmword_2508F8 > 1 )
    {
      v7 = (const void *)qword_2508F0;
      v8 = src;
      if ( *((_QWORD *)&v11 + 1) < (unsigned __int64)xmmword_2508F8 )
      {
        src = (void *)qvector_reserve();
        v8 = src;
      }
      *(_QWORD *)&v11 = v4;
      memmove(v8, v7, v4 - 1);
      *((char *)src + v4 - 1) = 0;
    }
    else
    {
      *(_QWORD *)&v11 = 0;
    }
  }
  else
  {
    sub_15D6A0(*(_QWORD *)(a1 + 8) + 272LL);
  }
  v9 = (8 * ((BYTE10(xmmword_244090) & 1) == 0))
     | (16 * ((_WORD)xmmword_244090 != 0))
     | (SBYTE10(xmmword_244090) >> 5) & 4
     | (BYTE10(xmmword_244090) >> 2) & 3;
  v1 = sub_8F730(
         (__int64)"@0:576[]\n"
                  "Text search (slow!)\n"
                  "\n"
                  "<~S~tring:q::50::>\n"
                  "  <Match ~c~ase:C>\n"
                  "  <~R~egular expression:C>\n"
                  "  <~I~dentifier:C>\n"
                  "  <##Parameters#Search ~U~p:C>\n"
                  "  <#Find all occurrences and display a list#~F~ind all occurrences:C>>\n",
         &src,
         &v9);
  if ( v1 )
  {
    if ( (unsigned __int64)v11 <= 1 )
    {
      v1 = 0;
    }
    else
    {
      LOWORD(xmmword_244090) = (v9 >> 4) & 1;
      BYTE10(xmmword_244090) = ((v9 & 8) == 0) | (32 * v9) & 0x80 | (4 * v9) & 0xC;
      sub_14A8F0((v9 & 8) != 0 ? -1 : 1);
      v2 = v11;
      if ( (unsigned __int64)v11 > 1 )
      {
        v5 = src;
        v6 = (void *)qword_2508F0;
        if ( *((_QWORD *)&xmmword_2508F8 + 1) < (unsigned __int64)v11 )
        {
          qword_2508F0 = qvector_reserve();
          v6 = (void *)qword_2508F0;
        }
        *(_QWORD *)&xmmword_2508F8 = v2;
        memmove(v6, v5, v2 - 1);
        *(_BYTE *)(qword_2508F0 + v2 - 1) = 0;
      }
      else
      {
        *(_QWORD *)&xmmword_2508F8 = 0;
      }
      v1 = 1;
    }
  }
  if ( src )
  {
    *(_QWORD *)&v11 = 0;
    qfree();
  }
  return v1;
}

