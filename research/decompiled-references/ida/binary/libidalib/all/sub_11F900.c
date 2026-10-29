__int64 *__fastcall sub_11F900(__int64 *a1, int a2, void (__fastcall *a3)(__int64, char *))
{
  int default_radix; // ebp
  __int64 *result; // rax
  __int64 v6; // rbx
  __int64 v7; // r12
  char *v8; // rsi
  __int64 v9; // r9
  unsigned __int64 v10; // r11
  __int64 v11; // r10
  __int64 v12; // rsi
  __int64 v13; // rax
  unsigned __int64 v14; // [rsp+8h] [rbp-50h]
  __int64 v15; // [rsp+10h] [rbp-48h]
  __int64 v16; // [rsp+18h] [rbp-40h]

  default_radix = get_default_radix();
  result = (__int64 *)&xmmword_252840;
  v6 = xmmword_2528A0;
  if ( a2 > 0 )
  {
    v7 = xmmword_2528A0 + a2;
    ((void (__fastcall *)(_QWORD))a3)(xmmword_2528A0);
    if ( default_radix == 8 )
      goto LABEL_9;
LABEL_3:
    v8 = default_radix == 10 ? "%3u" : "%02X";
    result = sub_96630(a1);
    if ( ++v6 != v7 )
    {
      do
      {
        a3(v6, v8);
        v9 = a1[1];
        if ( v9 )
        {
          v10 = v9 + 1;
          v11 = a1[1];
          v12 = *a1;
          --v9;
          if ( a1[2] < v10 )
            goto LABEL_12;
        }
        else
        {
          v12 = *a1;
          v11 = 1;
          v10 = 2;
          if ( (unsigned __int64)a1[2] < 2 )
          {
LABEL_12:
            v16 = v11;
            v15 = v9;
            v14 = v10;
            v13 = qvector_reserve();
            v11 = v16;
            v9 = v15;
            *a1 = v13;
            v10 = v14;
            v12 = v13;
          }
        }
        a1[1] = v10;
        *(_BYTE *)(v12 + v9) = 32;
        *(_BYTE *)(*a1 + v11) = 0;
        if ( default_radix != 8 )
          goto LABEL_3;
LABEL_9:
        v8 = "%03o";
        ++v6;
        result = sub_96630(a1);
      }
      while ( v6 != v7 );
    }
  }
  return result;
}

