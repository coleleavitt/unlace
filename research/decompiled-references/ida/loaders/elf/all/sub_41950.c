__int64 __fastcall sub_41950(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r12
  unsigned __int64 v6; // rbx
  __int64 v7; // rsi
  char *v8; // rax
  char v10; // [rsp+0h] [rbp-1038h] BYREF
  char v11; // [rsp+1h] [rbp-1037h] BYREF
  unsigned __int64 v12; // [rsp+1008h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  v4 = a4;
  if ( a4 <= 0 )
    return 1;
  v6 = 4096;
  v7 = *(_QWORD *)(a2 + 480);
  if ( (unsigned __int64)a4 <= 0x1000 )
    v6 = a4;
  if ( qlseek(*(_QWORD *)(a2 + 472), a3 + v7, 0) != -1 )
  {
    while ( 1 )
    {
      if ( v6 > v4 )
        v6 = v4;
      if ( qlread(*a1, &v10, v6) != v6 )
        break;
      if ( v6 > 1 )
      {
        v8 = &v11;
        while ( (unsigned __int8)*v8 == v10 )
        {
          if ( ++v8 == &v10 + v6 )
            goto LABEL_13;
        }
        return 0;
      }
LABEL_13:
      v4 -= v6;
      if ( !v4 )
        return 1;
    }
  }
  return 0;
}

