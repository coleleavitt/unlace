/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47D0E0
// Address: 0x000000000047D0E0

//----- (000000000047D0E0) ----------------------------------------------------
__int64 __fastcall sub_47D0E0(__int64 a1, unsigned __int8 a2, __int16 a3, unsigned __int8 *a4)
{
  __int64 v8; // x20
  _QWORD *v9; // x0
  _BYTE *v10; // x0
  size_t v11; // x0
  size_t v12; // x23
  unsigned __int64 v14; // x24
  void *v15; // x0
  char buf[4096]; // [xsp+48h] [xbp-1008h] BYREF
  __int64 v17; // [xsp+1048h] [xbp-8h] BYREF

  sub_476300(a1, a2);
  *(_QWORD *)a1 = qword_51E3D0;
  v8 = a1 + 112;
  *(_QWORD *)(a1 + 112) = 0;
  *(_QWORD *)(v8 + 8) = 0;
  *(_QWORD *)(v8 + 16) = 0;
  *(_QWORD *)(a1 + 136) = 0;
  *(_QWORD *)(a1 + 144) = 0;
  *(_QWORD *)(a1 + 152) = 0;
  *(_QWORD *)(a1 + 160) = 0;
  *(_QWORD *)(a1 + 168) = 0;
  *(_BYTE *)(a1 + 176) = 0;
  *(_BYTE *)(a1 + 177) = 0;
  *(_QWORD *)(a1 + 184) = 0;
  *(_QWORD *)(a1 + 192) = 0;
  *(_QWORD *)(a1 + 200) = 0;
  v9 = sub_49E050(0x10u);
  *(_WORD *)(a1 + 104) = a3;
  *v9 = off_51BB88;
  v9[1] = a1;
  *(_QWORD *)(a1 + 168) = v9;
  sub_48A570(buf, 0x1000u);
  v10 = sub_48F420(buf);
  sub_493350((unsigned __int64)v10, a4, (char *)&v17 - v10);
  v11 = strlen(buf);
  v12 = v11;
  if ( v11 )
  {
    v14 = v11 + 1;
    v15 = *(void **)(a1 + 112);
    if ( v14 > *(_QWORD *)(v8 + 16) )
    {
      v15 = sub_491288(v8, *(void **)(a1 + 112), v14, 1u);
      *(_QWORD *)(a1 + 112) = v15;
    }
    *(_QWORD *)(v8 + 8) = v14;
    memmove(v15, buf, v12);
    *(_BYTE *)(*(_QWORD *)(a1 + 112) + v12) = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 120) = 0;
  }
  return v17 ^ _stack_chk_guard;
}
// 51BB88: using guessed type __int64 (__fastcall *off_51BB88[4])();
// 51E3D0: using guessed type __int64 qword_51E3D0[2];
