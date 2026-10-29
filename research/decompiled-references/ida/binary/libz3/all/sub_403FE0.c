__int64 __fastcall sub_403FE0(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rax
  _QWORD *v6; // rbx
  _QWORD *v7; // r15
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v12[9]; // [rsp+0h] [rbp-48h] BYREF

  v3 = a1[2];
  v12[1] = 0;
  v4 = *(_QWORD *)(v3 + 8);
  v5 = *(_QWORD *)(v3 + 16);
  v12[0] = v4;
  sub_3D8450(a2, a1 + 3, *(_BYTE *)(v5 + 645), *(_BYTE *)(v5 + 646));
  v6 = (_QWORD *)a1[6];
  if ( v6 )
  {
    v7 = &v6[*((unsigned int *)v6 - 1)];
    if ( v6 >= v7 )
      goto LABEL_9;
    do
    {
      while ( 1 )
      {
        v8 = *v6;
        if ( *v6 )
        {
          v9 = a1[5];
          if ( (*(_DWORD *)(v8 + 8))-- == 1 )
            break;
        }
        if ( ++v6 >= v7 )
          goto LABEL_8;
      }
      sub_15D7BC0(v9, v8);
      ++v6;
    }
    while ( v6 < v7 );
LABEL_8:
    v6 = (_QWORD *)a1[6];
    if ( v6 )
LABEL_9:
      *((_DWORD *)v6 - 1) = 0;
  }
  sub_3EE030((__int64)(a1 + 5), (__int64)v12);
  return sub_2B4F40(v12);
}

