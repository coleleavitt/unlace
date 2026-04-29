__int64 __fastcall sub_1E8E50(int *a1, int a2)
{
  __int64 v2; // rdx
  int v3; // r12d
  int v4; // r14d
  __int64 v5; // rax
  __int64 result; // rax
  int v7; // r14d
  __int64 v8; // rax
  unsigned int v9; // [rsp+Ch] [rbp-6Ch]
  unsigned int v10; // [rsp+Ch] [rbp-6Ch]
  __int64 v11; // [rsp+10h] [rbp-68h] BYREF
  __int64 v12; // [rsp+18h] [rbp-60h]
  __int128 v13; // [rsp+20h] [rbp-58h]
  __int64 v14; // [rsp+30h] [rbp-48h]
  __int128 v15; // [rsp+38h] [rbp-40h]
  unsigned __int64 v16; // [rsp+48h] [rbp-30h]

  v2 = 112;
  v3 = 0;
  v16 = __readfsqword(0x28u);
  while ( 1 )
  {
    v11 = 0;
    v12 = 0;
    v14 = 0;
    v13 = 0;
    v15 = 0;
    sub_C98B0(0x7D4u, &v11, v2);
    v4 = 0;
    v5 = 0;
    if ( (_QWORD)v13 )
    {
      while ( 1 )
      {
        result = (*(__int64 (__fastcall **)(int *, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, *(unsigned int *)(v12 + 4 * v5));
        if ( a1[20] )
        {
          if ( a2 >= (unsigned __int64)(int)result && a1[20] + (__int64)(int)result - 1 >= (unsigned __int64)a2 )
            break;
        }
        v5 = ++v4;
        if ( v4 >= (unsigned __int64)v13 )
          goto LABEL_7;
      }
      if ( (_DWORD)result != -1 )
        break;
    }
LABEL_7:
    v7 = 0;
    v8 = 0;
    if ( (_QWORD)v15 )
    {
      while ( 1 )
      {
        result = (*(__int64 (__fastcall **)(int *, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, *(unsigned int *)(v14 + 4 * v8));
        if ( a1[20] )
        {
          if ( a2 >= (unsigned __int64)(int)result && a1[20] + (__int64)(int)result - 1 >= (unsigned __int64)a2 )
            break;
        }
        v8 = ++v7;
        if ( v7 >= (unsigned __int64)v15 )
          goto LABEL_12;
      }
      if ( (_DWORD)result != -1 )
        break;
    }
LABEL_12:
    if ( v14 )
    {
      *(_QWORD *)&v15 = 0;
      qfree(v14);
    }
    if ( v12 )
    {
      *(_QWORD *)&v13 = 0;
      qfree(v12);
    }
    v2 = 128;
    if ( v3 == 1 )
      return 0xFFFFFFFFLL;
    v3 = 1;
  }
  if ( v14 )
  {
    v9 = result;
    *(_QWORD *)&v15 = 0;
    qfree(v14);
    result = v9;
  }
  if ( v12 )
  {
    v10 = result;
    *(_QWORD *)&v13 = 0;
    qfree(v12);
    return v10;
  }
  return result;
}
