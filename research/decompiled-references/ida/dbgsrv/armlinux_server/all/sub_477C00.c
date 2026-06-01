/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_477C00
// Address: 0x0000000000477C00

//----- (0000000000477C00) ----------------------------------------------------
__int64 __fastcall sub_477C00(__int64 a1, __int64 *a2)
{
  __int64 (*v4)(void); // x1
  __int64 v5; // x21
  __int64 v6; // x19
  __int64 v7; // x20
  __int64 v8; // x0
  __int64 (__fastcall *v9)(); // x1
  unsigned int v10; // w19
  const char *v11; // x0
  const char *v12; // x19
  size_t v13; // x0
  size_t v14; // x20
  unsigned __int64 v16; // x25
  void *v17; // x0
  const char *v18; // x1
  __int64 v19; // [xsp+40h] [xbp-10h] BYREF

  v4 = *(__int64 (**)(void))(*(_QWORD *)a1 + 24LL);
  if ( (char *)v4 == (char *)sub_477AB0 )
    v5 = *(_QWORD *)(a1 + 96);
  else
    v5 = v4();
  if ( !v5 || *(_BYTE *)(a1 + 8) )
  {
    return (unsigned int)-1;
  }
  else
  {
    sub_479098((__int64)a2);
    v6 = a2[1];
    v7 = *a2;
    sub_4775F8(&v19, v5, 0, v6);
    if ( v6 > 0 )
    {
      while ( 1 )
      {
        v8 = sub_477008(v5);
        if ( v8 < 0 )
          break;
        v6 -= v8;
        v7 += v8;
        sub_477630(&v19);
        if ( v6 <= 0 )
          goto LABEL_17;
      }
      v9 = *(__int64 (__fastcall **)())(*(_QWORD *)a1 + 48LL);
      if ( v9 != nullsub_16 )
        ((void (__fastcall *)(__int64))v9)(a1);
      *(_BYTE *)(a1 + 8) = 1;
      v10 = -1;
      if ( (unsigned int)sub_477028(v5) != -15059582 )
      {
        v11 = (const char *)sub_477038(v5);
        v12 = v11;
        if ( v11 && (v13 = strlen(v11), (v14 = v13) != 0) )
        {
          v16 = v13 + 1;
          v17 = *(void **)(a1 + 16);
          if ( v16 > *(_QWORD *)(a1 + 32) )
          {
            v17 = sub_491288(a1 + 16, *(void **)(a1 + 16), v16, 1u);
            *(_QWORD *)(a1 + 16) = v17;
          }
          *(_QWORD *)(a1 + 24) = v16;
          v18 = v12;
          v10 = -1;
          memmove(v17, v18, v14);
          *(_BYTE *)(*(_QWORD *)(a1 + 16) + v14) = 0;
        }
        else
        {
          v10 = -1;
          *(_QWORD *)(a1 + 24) = 0;
        }
      }
    }
    else
    {
LABEL_17:
      v10 = 0;
    }
    sub_477618(&v19);
  }
  return v10;
}
// 462618: using guessed type __int64 __fastcall nullsub_16();
