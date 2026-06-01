/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C2950
// Address: 0x080C2950

//----- (080C2950) --------------------------------------------------------
int __cdecl sub_80C2950(_DWORD *a1, int a2)
{
  int v2; // edi
  int result; // eax
  _DWORD *v4; // eax
  int v5; // edi
  pthread_mutex_t *mutex; // [esp+0h] [ebp-24h]
  int v7; // [esp+8h] [ebp-1Ch]
  int v8; // [esp+8h] [ebp-1Ch]

  v2 = *(_DWORD *)(a2 + 20);
  if ( !v2 || (v7 = *(_DWORD *)(a2 + 32), !(unsigned __int8)sub_80CED40(v2)) )
  {
    a1[8] = "certchain_not_found";
    return 0;
  }
  if ( !v7 || !(unsigned __int8)sub_80CED40(v7) )
  {
    a1[8] = "privkey_not_found";
    return 0;
  }
  if ( !(unsigned __int8)sub_80C21D0(&dword_811E820, a1 + 8) )
    return 0;
  v4 = sub_80BBEF0(0);
  a1[4] = v4;
  if ( !(unsigned __int8)sub_80BBF80((int)v4) )
  {
    a1[8] = "irs";
    return 0;
  }
  mutex = (pthread_mutex_t *)dword_811E828;
  sub_80D15A0((pthread_mutex_t *)dword_811E828);
  if ( dword_811E838 )
  {
    v8 = dword_811E838;
    sub_80D1600(mutex);
    a1[11] = v8;
  }
  else
  {
    v5 = sub_80C2370((int **)&dword_811E820, 0, v2, v7);
    dword_811E838 = v5;
    sub_80D1600(mutex);
    a1[11] = v5;
    if ( !v5 )
      goto LABEL_15;
  }
  result = sub_80C2860((int)a1);
  if ( !(_BYTE)result )
  {
LABEL_15:
    a1[8] = "openssl";
    return 0;
  }
  return result;
}
// 811E820: using guessed type int dword_811E820;
// 811E828: using guessed type int dword_811E828;
// 811E838: using guessed type int dword_811E838;
