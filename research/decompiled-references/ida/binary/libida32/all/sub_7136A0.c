char *__fastcall sub_7136A0(__m128i *a1, unsigned __int16 a2, int a3)
{
  __int8 *v4; // r13
  __int64 v5; // r8
  __int64 v6; // r8
  unsigned __int16 *v8; // rbx
  __int64 v9; // rax
  void (__fastcall *v10)(__int64, _QWORD); // rax
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax

  if ( a1->m128i_i64[0] )
  {
    v4 = &a1->m128i_i8[8 * (a2 & 0x3F)];
    v5 = *((_QWORD *)v4 + 4);
    if ( v5 )
    {
      while ( *(_WORD *)v5 != a2 )
      {
        v5 = *(_QWORD *)(v5 + 16);
        if ( !v5 )
          goto LABEL_9;
      }
      sub_713580(a1, v5 + a1[36].m128i_u16[6]);
      if ( a3 == 1 )
        *(_BYTE *)(v6 + 40) = 1;
      return (char *)(v6 + a1[36].m128i_u16[6]);
    }
    else
    {
LABEL_9:
      v8 = (unsigned __int16 *)a1[34].m128i_i64[0];
      while ( *((_BYTE *)v8 + 41) )
      {
        v8 = *((unsigned __int16 **)v8 + 4);
        if ( (unsigned __int16 *)a1[34].m128i_i64[0] == v8 )
        {
          v10 = (void (__fastcall *)(__int64, _QWORD))a1[1].m128i_i64[0];
          v11 = 33;
          if ( v10 )
            goto LABEL_21;
LABEL_31:
          off_2C57CC0();
        }
      }
      if ( *v8 != 0xFFFF )
      {
        v12 = *((_QWORD *)v8 + 2);
        v13 = *((_QWORD *)v8 + 1);
        if ( v12 )
          *(_QWORD *)(v12 + 8) = v13;
        if ( v13 )
          *(_QWORD *)(v13 + 16) = v12;
        else
          a1[2].m128i_i64[*v8 & 0x3F] = v12;
      }
      if ( *((_BYTE *)v8 + 40) && (unsigned int)sub_714480(a1->m128i_i64[0], *v8, (char *)v8 + a1[36].m128i_u16[6]) )
      {
        *((_BYTE *)v8 + 40) = 0;
        *v8 = -1;
        return nullptr;
      }
      if ( a3 )
      {
        if ( a2 >= (unsigned int)a1[35].m128i_i16[4] )
        {
          v14 = sub_7142F0(a1->m128i_i64[0]);
          if ( (unsigned int)sub_712F60(a1, v14 * (a2 + 1LL)) )
          {
            byte_2CA25C0 = 0;
            *v8 = -1;
            return nullptr;
          }
        }
        *((_BYTE *)v8 + 40) = 1;
      }
      else
      {
        *((_BYTE *)v8 + 40) = 0;
        if ( (unsigned int)sub_714300(a1->m128i_i64[0], a2, (char *)v8 + a1[36].m128i_u16[6]) )
        {
          *v8 = -1;
          return nullptr;
        }
      }
      v9 = *((_QWORD *)v4 + 4);
      *((_QWORD *)v8 + 2) = v9;
      if ( v9 )
        *(_QWORD *)(v9 + 8) = v8;
      *((_QWORD *)v8 + 1) = 0;
      *((_QWORD *)v4 + 4) = v8;
      a1[34].m128i_i64[1] = (__int64)v8;
      a1[34].m128i_i64[0] = *((_QWORD *)v8 + 4);
      *v8 = a2;
      return (char *)v8 + a1[36].m128i_u16[6];
    }
  }
  else
  {
    v10 = (void (__fastcall *)(__int64, _QWORD))a1[1].m128i_i64[0];
    v11 = 36;
    if ( !v10 )
      goto LABEL_31;
LABEL_21:
    v10(v11, 0);
    return nullptr;
  }
}

