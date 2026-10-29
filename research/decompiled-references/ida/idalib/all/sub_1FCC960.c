__int64 __fastcall sub_1FCC960(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // r12
  unsigned int v9; // esi
  __int64 v10; // rdi
  unsigned int v11; // edx
  __int64 *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 *v16; // r10
  int v17; // ecx
  __int64 v18; // rdi
  bool v19; // zf
  __int64 v20; // [rsp+0h] [rbp-38h] BYREF
  _QWORD v21[6]; // [rsp+8h] [rbp-30h] BYREF

  v8 = *a1;
  v20 = a2;
  v9 = *(_DWORD *)(v8 + 3064);
  if ( !v9 )
  {
    v21[0] = 0;
LABEL_12:
    v9 *= 2;
    goto LABEL_13;
  }
  a5 = v9 - 1;
  v10 = *(_QWORD *)(v8 + 3048);
  v11 = a5 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
  v12 = (__int64 *)(v10 + 16LL * v11);
  v13 = *v12;
  if ( a2 == *v12 )
  {
LABEL_3:
    v14 = *((unsigned int *)v12 + 2);
    goto LABEL_4;
  }
  a6 = 1;
  v16 = nullptr;
  if ( v13 != -4096 )
  {
    while ( 1 )
    {
      if ( !v16 && v13 == -8192 )
        v16 = v12;
      v11 = a5 & (a6 + v11);
      v12 = (__int64 *)(v10 + 16LL * v11);
      v13 = *v12;
      if ( a2 == *v12 )
        goto LABEL_3;
      if ( v13 == -4096 )
      {
        if ( v16 )
          v12 = v16;
        break;
      }
      a6 = (unsigned int)(a6 + 1);
    }
  }
  v17 = *(_DWORD *)(v8 + 3056);
  v21[0] = v12;
  a3 = (unsigned int)(v17 + 1);
  a4 = 3 * v9;
  if ( 4 * (int)a3 >= (unsigned int)a4 )
    goto LABEL_12;
  v18 = a2;
  a4 = v9 - *(_DWORD *)(v8 + 3060) - (unsigned int)a3;
  a5 = v9 >> 3;
  if ( (unsigned int)a4 <= (unsigned int)a5 )
  {
LABEL_13:
    sub_1FCC760((__int64 *)(v8 + 3048), v9, a3, a4, a5, a6);
    sub_1FCBEE0((__int64 *)(v8 + 3048), &v20, v21);
    v18 = v20;
    LODWORD(a3) = *(_DWORD *)(v8 + 3056) + 1;
    v12 = (__int64 *)v21[0];
  }
  v19 = *v12 == -4096;
  *(_DWORD *)(v8 + 3056) = a3;
  if ( !v19 )
    --*(_DWORD *)(v8 + 3060);
  *v12 = v18;
  v14 = 0;
  *((_DWORD *)v12 + 2) = 0;
LABEL_4:
  sub_9B9C90(a1[3], v14);
  sub_1F6F570((_QWORD *)a1[2], *(_DWORD *)(a2 + 4), a1[3]);
  return sub_1F6F570((_QWORD *)a1[2], *(_DWORD *)(a2 + 8), a1[3]);
}
