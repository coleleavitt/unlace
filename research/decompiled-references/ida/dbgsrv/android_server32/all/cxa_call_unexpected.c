/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cxa_call_unexpected
// Address: 0x00090C40

//----- (00090C40) --------------------------------------------------------
void __noreturn _cxa_call_unexpected(void *a1)
{
  int v1; // r9
  char *v2; // r11
  __int64 v4; // r0
  int v5; // r8
  char *v6; // r10
  __int64 v7; // r0
  void *v8; // r0
  char *v9; // r0
  int v10; // r0
  char *v11; // r11
  char *v12; // r8
  int v13; // r11
  __int64 v14; // r0
  int v15; // r0
  _DWORD *exception; // r0
  int v17; // [sp+Ch] [bp-34h]
  int v18; // [sp+10h] [bp-30h]
  int v19; // [sp+14h] [bp-2Ch]
  void (*terminate)(void); // [sp+18h] [bp-28h]
  _UNKNOWN **v21; // [sp+1Ch] [bp-24h] BYREF
  char *v22; // [sp+20h] [bp-20h] BYREF

  if ( !a1 )
    sub_90BDC(0, nullptr);
  _cxa_begin_catch(a1);
  LODWORD(v4) = *((_DWORD *)a1 + 1) ^ 0x434C4E47;
  HIDWORD(v4) = *(_DWORD *)a1 & 0xFFFFFF00 ^ 0x432B2B00;
  v5 = HIDWORD(v4) | v4;
  if ( v4 )
  {
    terminate = (void (*)(void))std::get_terminate();
    v6 = nullptr;
    LODWORD(v7) = std::get_unexpected();
  }
  else
  {
    v1 = *((_DWORD *)a1 + 13);
    v6 = (char *)a1 - 40;
    v7 = *(_QWORD *)((char *)a1 - 28);
    v2 = *((char **)a1 + 11);
    terminate = *((void (**)(void))a1 - 6);
    v22 = v2;
    v19 = v1 >> 31;
  }
  v8 = (void *)((int (__fastcall *)(_DWORD))loc_90664)(v7);
  _cxa_begin_catch(v8);
  if ( !v5 )
  {
    v22 = v2 + 1;
    sub_90DD0(&v22, (unsigned __int8)*v2);
    v9 = v22++;
    if ( (unsigned __int8)*v9 == 255
      || (v10 = sub_90E78(&v22),
          v11 = v22,
          v17 = v10,
          v18 = ((int (*)(void))_cxa_get_globals_fast)(),
          (v12 = *(char **)v18) == nullptr) )
    {
LABEL_18:
      sub_906A4(terminate);
    }
    v13 = (int)&v11[v17];
    if ( v12 != v6 )
    {
      LODWORD(v14) = *((_DWORD *)v12 + 10);
      HIDWORD(v14) = *((_DWORD *)v12 + 11) ^ 0x434C4E47;
      if ( !(v14 & 0xFFFFFF00 ^ 0x432B2B00 | HIDWORD(v14)) )
      {
        v15 = v14 == 1126902529 ? *(_DWORD *)v12 : (int)(v12 + 128);
        if ( !sub_90EA0(v1, v19, v13, *((_DWORD *)v12 + 1), v15, a1) )
        {
          *((_DWORD *)v12 + 6) = -*((_DWORD *)v12 + 6);
          ++*(_DWORD *)(v18 + 4);
          _cxa_end_catch();
          _cxa_end_catch();
          _cxa_begin_catch(v12 + 40);
          _cxa_rethrow();
        }
      }
    }
    v21 = &off_DBA2C;
    if ( !sub_90EA0(v1, v19, v13, (int)&`typeinfo for'std::bad_exception, (int)&v21, a1) )
    {
      _cxa_end_catch();
      exception = _cxa_allocate_exception(4u);
      *exception = &off_DBA2C;
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::bad_exception,
        (void (*)(void *))std::exception::~exception);
    }
    std::exception::~exception((std::exception *)&v21);
  }
  _cxa_end_catch();
  goto LABEL_18;
}
// 90CB0: variable 'v2' is possibly undefined
// 90D22: variable 'v1' is possibly undefined
// 90D22: variable 'v19' is possibly undefined
// DBA2C: using guessed type _UNKNOWN *;
// DBA38: using guessed type _UNKNOWN *`typeinfo for'std::bad_exception;
