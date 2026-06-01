/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_602C0
// Address: 0x00000000000602C0

//----- (00000000000602C0) ----------------------------------------------------
__int64 __fastcall sub_602C0(__int64 a1, __int64 a2, __int64 a3, signed __int64 a4)
{
  pthread_mutex_t *v5; // x0
  void *v6; // x2
  _QWORD *v7; // x8
  const char *v8; // x0
  char *v9; // x0
  const char *v10; // x20

  v5 = *(pthread_mutex_t **)(a1 + 200);
  v6 = (void *)*(unsigned __int16 *)(a1 + 120);
  *(_BYTE *)(a1 + 220) = 0;
  sub_68E08(v5, (_BYTE *)&dword_0 + 1, v6, a4);
  if ( *(unsigned __int8 *)(a1 + 212) != 175 )
    sub_603A4(a1);
  ((void (__fastcall *)(__int64, __int64))loc_6906C)(*(_QWORD *)(a1 + 192) + 32LL, a1 + 392);
  if ( *(_QWORD *)(a1 + 184) )
  {
    v7 = *(_QWORD **)(a1 + 192);
    v8 = v7[1] ? (const char *)*v7 : &byte_F154B;
    v9 = strchr(v8, 46);
    if ( v9 )
    {
      v10 = v9 + 1;
      if ( !strcmp(v9 + 1, "__getattr__") )
      {
        *(_DWORD *)(*(_QWORD *)(a1 + 184) + 56LL) = ((__int64 (__fastcall *)(_QWORD, _QWORD))loc_699C8)(
                                                      *(_QWORD *)(a1 + 104),
                                                      *(_QWORD *)(a1 + 192));
      }
      else if ( !strcmp(v10, "__setattr__") )
      {
        *(_DWORD *)(*(_QWORD *)(a1 + 184) + 60LL) = ((__int64 (__fastcall *)(_QWORD, _QWORD))loc_699C8)(
                                                      *(_QWORD *)(a1 + 104),
                                                      *(_QWORD *)(a1 + 192));
      }
    }
  }
  sub_5E994(a1);
  return 0;
}
// 0: using guessed type int dword_0;
// F154B: using guessed type char byte_F154B;
