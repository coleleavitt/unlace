/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140049580
// Address: 0x0000000140049580

//----- (0000000140049580) ----------------------------------------------------
__int64 __fastcall sub_140049580(__int64 a1, int a2, _QWORD *a3, unsigned __int64 *a4, unsigned __int64 *a5)
{
  unsigned __int64 *v6; // rbx
  int v10; // edi
  _BYTE *v11; // rcx
  unsigned __int64 v12; // rdx
  char *Src; // rdi
  int v15; // esi
  int v16; // eax
  int v17; // ebp
  _BYTE *v19; // rcx
  unsigned __int64 v20; // rdx
  char *v21; // rdi
  int v23; // esi
  int v24; // eax
  int v25; // ebx
  int v26[2]; // [rsp+40h] [rbp-38h] BYREF
  __int16 v27; // [rsp+48h] [rbp-30h]
  __int64 (__fastcall **v28)(int, int, int, int, __int64, __int64); // [rsp+80h] [rbp+8h] BYREF

  v6 = a5;
  if ( *(_BYTE *)(a1 + 184) )
    sub_140002CE0((struct __crt_locale_pointers *)"handle_server_ioctl(fn=%d, bufsize=%zu).\n", a2, a5[1] - *a5);
  v10 = a2 - 16777217;
  if ( v10 )
  {
    if ( v10 == 1 )
    {
      v11 = (_BYTE *)*v6;
      v12 = v6[1];
      Src = (char *)*v6;
      while ( (unsigned __int64)v11 < v12 )
      {
        if ( !*v11++ )
        {
          *v6 = (unsigned __int64)v11;
          goto LABEL_10;
        }
      }
      Src = nullptr;
LABEL_10:
      v15 = sub_14005B690(v6, v12);
      v16 = sub_14005B690(v6, v6[1]);
      v17 = v16;
      if ( *(_BYTE *)(a1 + 184) )
        sub_140002CE0((struct __crt_locale_pointers *)"file_path = %s; arch = %d; is_be = %d.\n", Src, v15, v16);
      v27 = sub_14005B7F0(v6, v6[1]);
      *(_QWORD *)v26 = &off_140098060;
      return sub_14004FB70(
               (__int64 (__fastcall ***)(_QWORD, void **, __int64, __int64 (__fastcall ***)(), void **, char **))v26,
               a1,
               a3,
               a4,
               (struct _exception *)Src,
               v15,
               v17 != 0);
    }
    else
    {
      return 0xFFFFFFFFLL;
    }
  }
  else
  {
    v19 = (_BYTE *)*v6;
    v20 = v6[1];
    v21 = (char *)*v6;
    while ( (unsigned __int64)v19 < v20 )
    {
      if ( !*v19++ )
      {
        *v6 = (unsigned __int64)v19;
        goto LABEL_19;
      }
    }
    v21 = nullptr;
LABEL_19:
    v23 = sub_14005B690(v6, v20);
    v24 = sub_14005B690(v6, v6[1]);
    v25 = v24;
    if ( *(_BYTE *)(a1 + 184) )
      sub_140002CE0((struct __crt_locale_pointers *)"file_path = %s; arch = %d; is_be = %d.\n", v21, v23, v24);
    v28 = &off_140098058;
    return sub_14004FB70(
             (__int64 (__fastcall ***)(_QWORD, void **, __int64, __int64 (__fastcall ***)(), void **, char **))&v28,
             a1,
             a3,
             a4,
             (struct _exception *)v21,
             v23,
             v25 != 0);
  }
}
// 140098058: using guessed type __int64 (__fastcall *off_140098058)(int, int, int, int, __int64, __int64);
// 140098060: using guessed type __int64 (__fastcall *off_140098060)(int, int, int, int, int, void *Block);
