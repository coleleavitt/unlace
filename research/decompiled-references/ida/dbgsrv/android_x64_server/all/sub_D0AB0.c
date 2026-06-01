/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D0AB0
// Address: 0x00000000000D0AB0

//----- (00000000000D0AB0) ----------------------------------------------------
__int64 __fastcall sub_D0AB0(__int64 a1)
{
  int *v1; // rax
  __int64 v2; // rbx
  unsigned __int64 v3; // r14
  int *v4; // rdx
  int *v5; // rbx
  unsigned __int64 v6; // rax
  __int64 v7; // rsi
  unsigned __int16 v8; // ax
  unsigned __int16 v9; // ax

  pthread_mutex_lock(&stru_158E68);
  v1 = (int *)qword_158E90;
  if ( !qword_158E90 )
  {
    v1 = dword_158EA0;
    qword_158E90 = (__int64)dword_158EA0;
    dword_158EA0[0] = 8388736;
  }
  v2 = 0;
  if ( v1 && v1 != &dword_1590A0 )
  {
    v3 = ((unsigned __int64)(a1 + 3) >> 2) + 1;
    v4 = nullptr;
    while ( 1 )
    {
      v5 = v1;
      v6 = *((unsigned __int16 *)v1 + 1);
      if ( v3 < v6 )
      {
        v8 = v6 - v3;
        *((_WORD *)v5 + 1) = v8;
        LOWORD(v5[v8]) = 0;
        HIWORD(v5[v8]) = v3;
        v2 = (__int64)&v5[v8 + 1];
        goto LABEL_15;
      }
      if ( v3 == v6 )
        break;
      v7 = *(unsigned __int16 *)v5;
      v1 = &dword_158EA0[v7];
      v4 = v5;
      if ( 4 * v7 == 512 )
      {
        v2 = 0;
        goto LABEL_15;
      }
    }
    v9 = *(_WORD *)v5;
    if ( v4 )
      *(_WORD *)v4 = v9;
    else
      qword_158E90 = (__int64)&dword_158EA0[v9];
    *(_WORD *)v5 = 0;
    v2 = (__int64)(v5 + 1);
  }
LABEL_15:
  pthread_mutex_unlock(&stru_158E68);
  return v2;
}
// 158E90: using guessed type __int64 qword_158E90;
// 158EA0: using guessed type int dword_158EA0[];
