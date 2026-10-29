__int64 *__fastcall sub_11F440(__int64 *a1, int a2, void (__fastcall *a3)(_QWORD))
{
  int default_radix; // ebp
  __int64 *result; // rax
  int v7; // r14d
  int v8; // ebx
  char *v9; // rsi
  __int64 v10; // r9
  unsigned __int64 v11; // r11
  __int64 v12; // r10
  __int64 v13; // rsi
  __int64 v14; // rax
  unsigned __int64 v15; // [rsp+8h] [rbp-50h]
  __int64 v16; // [rsp+10h] [rbp-48h]
  __int64 v17; // [rsp+18h] [rbp-40h]

  default_radix = get_default_radix();
  result = (__int64 *)&xmmword_2516A0;
  v7 = qword_251700;
  if ( a2 > 0 )
  {
    v8 = 0;
    a3((unsigned int)qword_251700);
    if ( default_radix == 8 )
      goto LABEL_9;
LABEL_3:
    v9 = default_radix == 10 ? "%3u" : "%02X";
    result = sub_96570(a1);
    if ( ++v8 != a2 )
    {
      do
      {
        ((void (__fastcall *)(_QWORD, char *))a3)((unsigned int)(v8 + v7), v9);
        v10 = a1[1];
        if ( v10 )
        {
          v11 = v10 + 1;
          v12 = a1[1];
          v13 = *a1;
          --v10;
          if ( a1[2] < v11 )
            goto LABEL_12;
        }
        else
        {
          v13 = *a1;
          v12 = 1;
          v11 = 2;
          if ( (unsigned __int64)a1[2] < 2 )
          {
LABEL_12:
            v17 = v12;
            v16 = v10;
            v15 = v11;
            v14 = qvector_reserve();
            v12 = v17;
            v10 = v16;
            *a1 = v14;
            v11 = v15;
            v13 = v14;
          }
        }
        a1[1] = v11;
        *(_BYTE *)(v13 + v10) = 32;
        *(_BYTE *)(*a1 + v12) = 0;
        if ( default_radix != 8 )
          goto LABEL_3;
LABEL_9:
        v9 = "%03o";
        ++v8;
        result = sub_96570(a1);
      }
      while ( v8 != a2 );
    }
  }
  return result;
}

