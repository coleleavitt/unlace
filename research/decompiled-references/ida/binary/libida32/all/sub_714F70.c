__int64 __fastcall sub_714F70(unsigned int *a1)
{
  unsigned int v1; // ebp
  _QWORD *v4; // rdi
  unsigned int v5; // eax
  __int16 v6; // ax
  int v7; // eax
  void *v8; // r12
  void *v9; // r12

  v1 = *((unsigned __int8 *)a1 + 5800);
  if ( !(_BYTE)v1 )
    return *((unsigned __int8 *)a1 + 5800);
  *((_BYTE *)a1 + 5800) = 0;
  sub_7177A0(a1, 1);
  v4 = *((_QWORD **)a1 + 1);
  byte_2CA25C2 = 0;
  *((_WORD *)a1 + 817) = 0;
  if ( v4 )
  {
    v5 = a1[405];
    if ( (v5 & 0x4000) != 0 )
    {
      sub_713370(v4, -1);
      v9 = *((void **)a1 + 1);
      if ( v9 )
      {
        sub_713500(*((_QWORD *)a1 + 1));
        operator delete(v9, 0x250u);
      }
      remove(*((const char **)a1 + 528));
      *((_QWORD *)a1 + 1) = 0;
      *((_BYTE *)a1 + 5800) = 1;
      return v1;
    }
    if ( (~(_BYTE)v5 & 7) != 0 )
    {
      v6 = sub_714800((__m128i *)a1);
      sub_712F60(*((_QWORD **)a1 + 1), *a1 * (unsigned __int64)(unsigned __int16)(v6 + 1));
    }
    v7 = sub_714E80((__int64)a1, 0);
    v8 = *((void **)a1 + 1);
    LOBYTE(v1) = v7 != 0;
    if ( v8 )
    {
      sub_713500(*((_QWORD *)a1 + 1));
      operator delete(v8, 0x250u);
    }
  }
  *((_QWORD *)a1 + 1) = 0;
  *((_BYTE *)a1 + 5800) = 1;
  return v1;
}

