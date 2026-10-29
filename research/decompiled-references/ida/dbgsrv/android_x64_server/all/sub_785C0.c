/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_785C0
// Address: 0x00000000000785C0

//----- (00000000000785C0) ----------------------------------------------------
__int64 __fastcall sub_785C0(_QWORD *a1, double a2, __m128 a3)
{
  _DWORD *v4; // r14
  char *v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rdi
  unsigned int v8; // ebx
  unsigned int v9; // eax
  void *v11[2]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v12; // [rsp+10h] [rbp-48h]
  char v13[8]; // [rsp+20h] [rbp-38h] BYREF
  void *ptr[2]; // [rsp+28h] [rbp-30h]
  __int64 v15; // [rsp+38h] [rbp-20h]
  unsigned __int64 v16; // [rsp+40h] [rbp-18h]

  v16 = __readfsqword(0x28u);
  *(_OWORD *)v11 = 0;
  v12 = 0;
  v4 = (_DWORD *)sub_774F0((__int64)a1, (__int128 *)v11, 0.0, a3);
  if ( v4 )
  {
    v5 = (char *)(a1[3] + 32LL * a1[4] - 32);
    v13[0] = 2;
    *(_OWORD *)ptr = 0;
    v15 = 0;
    copy_idcv(v13, v5, 0.0, a3);
    v6 = a1[4];
    if ( v6 )
    {
      v7 = v6 - 1;
      a1[4] = v7;
      free_idcv((char *)(a1[3] + 32 * v7), 0.0, a3);
    }
    if ( v13[0] == 5 )
    {
      sub_72DD0((char **)ptr[0], v13, 0.0, a3);
    }
    else if ( v13[0] == 7 && ptr[0] )
    {
      ptr[1] = nullptr;
      qfree(ptr[0]);
      ptr[0] = nullptr;
      v15 = 0;
    }
    LOBYTE(v9) = sub_759C0((__int64)a1, v4, (__int64)v11, (char *)(a1[3] + 32LL * a1[4] - 32), 0.0, a3);
    v8 = v9;
  }
  else
  {
    sub_75F30(a1, 0.0, a3);
    v8 = 0;
  }
  if ( v11[0] )
  {
    v11[1] = nullptr;
    qfree(v11[0]);
    v11[0] = nullptr;
    v12 = 0;
  }
  return v8;
}
// 786C5: variable 'v9' is possibly undefined
