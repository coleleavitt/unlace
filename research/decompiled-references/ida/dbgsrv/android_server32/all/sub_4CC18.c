/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4CC18
// Address: 0x0004CC18

//----- (0004CC18) --------------------------------------------------------
int __fastcall sub_4CC18(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29,
        int a30,
        int a31)
{
  const char *v31; // r5
  pthread_mutex_t *v32; // r6
  int (__fastcall ***v33)(_DWORD, const char *); // r0
  int v34; // r0
  int v35; // r2
  int v36; // r3
  int v37; // r0
  int v38; // r0

  v32 = (pthread_mutex_t *)dword_DE374;
  qmutex_lock((pthread_mutex_t *)dword_DE374);
  *(_DWORD *)(a21 + 64) = sub_41550(*(_DWORD **)(a21 + 4), v31);
  qmutex_unlock(v32);
  if ( *(_DWORD *)(a21 + 64) == 0x7FFFFFFF )
  {
    v33 = *(int (__fastcall ****)(_DWORD, const char *))(a21 + 72);
    if ( !v33 )
      v33 = (int (__fastcall ***)(_DWORD, const char *))sub_4AD9C();
    if ( (**v33)(v33, v31) != -1 )
      JUMPOUT(0x4CD60);
    sub_4AD9C();
  }
  free_idcv((unsigned __int8 *)a22);
  *(_BYTE *)a22 = 6;
  v34 = *(_DWORD *)(a21 + 64);
  *(_DWORD *)(a22 + 8) = v34;
  sub_4B2F6(v34, a22, v35, v36);
  v37 = sub_448A0(a31, (unsigned __int8 *)&a29);
  v38 = sub_4BA8E(v37);
  return sub_4CC8C(v38);
}
// 4CC5A: control flows out of bounds to 4CD60
// 4CC2E: variable 'v31' is possibly undefined
// 4CC76: variable 'v35' is possibly undefined
// 4CC76: variable 'v36' is possibly undefined
// 4AD9C: using guessed type int sub_4AD9C(void);
// 4B2F6: using guessed type int __fastcall sub_4B2F6(_DWORD, _DWORD, _DWORD, _DWORD);
// 4BA8E: using guessed type int __fastcall sub_4BA8E(_DWORD);
// DE374: using guessed type int dword_DE374;
