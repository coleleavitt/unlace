__int64 __fastcall sub_400110(unsigned __int64 a1)
{
  int v1; // edx
  int v2; // rax^4
  __int64 v3; // rdi

  v1 = ((((((_DWORD)a1 - (((unsigned int)a1 >> 1) & 0x55555555)) & 0x33333333)
        + ((((unsigned int)a1 - (((unsigned int)a1 >> 1) & 0x55555555)) >> 2) & 0x33333333)
        + (((((_DWORD)a1 - (((unsigned int)a1 >> 1) & 0x55555555)) & 0x33333333)
          + ((((unsigned int)a1 - (((unsigned int)a1 >> 1) & 0x55555555)) >> 2) & 0x33333333)) >> 4))
       & 0xF0F0F0F) >> 8)
     + ((((a1 - (((unsigned int)a1 >> 1) & 0x55555555)) & 0x33333333)
       + ((((unsigned int)a1 - (((unsigned int)a1 >> 1) & 0x55555555)) >> 2) & 0x33333333)
       + (((((_DWORD)a1 - (((unsigned int)a1 >> 1) & 0x55555555)) & 0x33333333)
         + ((((unsigned int)a1 - (((unsigned int)a1 >> 1) & 0x55555555)) >> 2) & 0x33333333)) >> 4))
      & 0xF0F0F0F);
  v2 = HIDWORD(a1);
  v3 = (a1 >> 33) & 0x55555555;
  return (unsigned __int8)(BYTE2(v1) + v1)
       + (unsigned int)(unsigned __int8)(((((((((unsigned int)(v2 - v3) >> 2) & 0x33333333)
                                            + ((v2 - (_DWORD)v3) & 0x33333333)
                                            + (((((unsigned int)(v2 - v3) >> 2) & 0x33333333)
                                              + ((v2 - (_DWORD)v3) & 0x33333333)) >> 4))
                                           & 0xF0F0F0F) >> 8)
                                         + (((((unsigned int)(v2 - v3) >> 2) & 0x33333333)
                                           + ((v2 - (_DWORD)v3) & 0x33333333)
                                           + (((((unsigned int)(v2 - v3) >> 2) & 0x33333333)
                                             + ((v2 - (_DWORD)v3) & 0x33333333)) >> 4))
                                          & 0xF0F0F0F)) >> 16)
                                       + ((unsigned __int16)(((((unsigned int)(v2 - v3) >> 2) & 0x3333)
                                                            + ((v2 - v3) & 0x3333)
                                                            + (((((unsigned int)(v2 - v3) >> 2) & 0x33333333)
                                                              + ((v2 - (_DWORD)v3) & 0x33333333)) >> 4))
                                                           & 0xF0F) >> 8)
                                       + (((((unsigned int)(v2 - v3) >> 2) & 0x33)
                                         + ((v2 - v3) & 0x33)
                                         + (((((unsigned int)(v2 - v3) >> 2) & 0x33333333)
                                           + ((v2 - (_DWORD)v3) & 0x33333333)) >> 4))
                                        & 0xF));
}

