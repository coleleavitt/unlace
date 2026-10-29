char *__fastcall sub_738E20(__m128i *a1, unsigned __int32 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  int v6; // r13d
  __int8 *v7; // r12
  __int64 v8; // r8
  unsigned int *v10; // rbx
  __int64 v11; // rax
  void (__fastcall *v12)(__int64, _QWORD); // rax
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax

  if ( a1->m128i_i64[0] )
  {
    v6 = a3;
    v7 = &a1->m128i_i8[8 * (a2 & 0x3F)];
    a5 = *((_QWORD *)v7 + 4);
    if ( a5 )
    {
      while ( *(_DWORD *)a5 != a2 )
      {
        a5 = *(_QWORD *)(a5 + 16);
        if ( !a5 )
          goto LABEL_9;
      }
      sub_738D00(a1, a5 + a1[36].m128i_u16[6]);
      if ( v6 == 1 )
        *(_BYTE *)(v8 + 40) = 1;
      return (char *)(v8 + a1[36].m128i_u16[6]);
    }
    else
    {
LABEL_9:
      v10 = (unsigned int *)a1[34].m128i_i64[0];
      while ( *((_BYTE *)v10 + 41) )
      {
        v10 = *((unsigned int **)v10 + 4);
        if ( (unsigned int *)a1[34].m128i_i64[0] == v10 )
        {
          v12 = (void (__fastcall *)(__int64, _QWORD))a1[1].m128i_i64[0];
          v13 = 33;
          if ( v12 )
            goto LABEL_21;
LABEL_31:
          off_2C81BC0(v13, 0, a3, a4, a5, a6);
        }
      }
      if ( *v10 != -1 )
      {
        v14 = *((_QWORD *)v10 + 2);
        v15 = *((_QWORD *)v10 + 1);
        if ( v14 )
          *(_QWORD *)(v14 + 8) = v15;
        if ( v15 )
          *(_QWORD *)(v15 + 16) = v14;
        else
          a1[2].m128i_i64[*v10 & 0x3F] = v14;
      }
      if ( *((_BYTE *)v10 + 40) && (unsigned int)sub_73B4C0(a1->m128i_i64[0], *v10, (char *)v10 + a1[36].m128i_u16[6]) )
      {
        *((_BYTE *)v10 + 40) = 0;
        *v10 = -1;
        return nullptr;
      }
      if ( v6 )
      {
        if ( a2 >= a1[35].m128i_i32[2] )
        {
          v16 = sub_73B330(a1->m128i_i64[0]);
          if ( (unsigned int)sub_738700(a1, v16 * (a2 + 1LL)) )
          {
            *v10 = -1;
            byte_2CCC5A0 = 0;
            return nullptr;
          }
        }
        *((_BYTE *)v10 + 40) = 1;
      }
      else
      {
        *((_BYTE *)v10 + 40) = 0;
        if ( (unsigned int)sub_73B340(a1->m128i_i64[0], a2, (char *)v10 + a1[36].m128i_u16[6]) )
        {
          *v10 = -1;
          return nullptr;
        }
      }
      v11 = *((_QWORD *)v7 + 4);
      *((_QWORD *)v10 + 2) = v11;
      if ( v11 )
        *(_QWORD *)(v11 + 8) = v10;
      *((_QWORD *)v10 + 1) = 0;
      *((_QWORD *)v7 + 4) = v10;
      a1[34].m128i_i64[1] = (__int64)v10;
      a1[34].m128i_i64[0] = *((_QWORD *)v10 + 4);
      *v10 = a2;
      return (char *)v10 + a1[36].m128i_u16[6];
    }
  }
  else
  {
    v12 = (void (__fastcall *)(__int64, _QWORD))a1[1].m128i_i64[0];
    v13 = 36;
    if ( !v12 )
      goto LABEL_31;
LABEL_21:
    v12(v13, 0);
    return nullptr;
  }
}
