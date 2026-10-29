/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D0C30
// Address: 0x00000000000D0C30

//----- (00000000000D0C30) ----------------------------------------------------
int __fastcall sub_D0C30(__int64 a1)
{
  int *v2; // r15
  __int64 v3; // r8
  int *v4; // rdx
  int *v5; // rsi
  int *v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rcx

  v2 = (int *)(a1 - 4);
  pthread_mutex_lock(&stru_158E68);
  if ( !qword_158E90 || (pthread_once_t *)qword_158E90 == &dword_1590A0 )
  {
LABEL_7:
    *(_WORD *)v2 = ((unsigned int)qword_158E90 - (unsigned int)dword_158EA0) >> 2;
    qword_158E90 = (__int64)v2;
  }
  else
  {
    v3 = *(unsigned __int16 *)(a1 - 2);
    v4 = &v2[v3];
    v5 = nullptr;
    v6 = (int *)qword_158E90;
    while ( 1 )
    {
      v7 = *((unsigned __int16 *)v6 + 1);
      if ( &v6[v7] == v2 )
      {
        *((_WORD *)v6 + 1) = v3 + v7;
        return pthread_mutex_unlock(&stru_158E68);
      }
      if ( v4 == v6 )
        break;
      v8 = *(unsigned __int16 *)v6;
      v5 = v6;
      v6 = &dword_158EA0[v8];
      if ( 4 * v8 == 512 )
        goto LABEL_7;
    }
    *(_WORD *)(a1 - 2) = v3 + v7;
    if ( v5 )
    {
      *(_WORD *)v5 = ((unsigned int)v2 - (unsigned int)dword_158EA0) >> 2;
    }
    else
    {
      qword_158E90 = (__int64)v2;
      *(_WORD *)v2 = *(_WORD *)v4;
    }
  }
  return pthread_mutex_unlock(&stru_158E68);
}
// 158E90: using guessed type __int64 qword_158E90;
// 158EA0: using guessed type int dword_158EA0[];
