__int64 __fastcall sub_645050(int a1, unsigned int a2)
{
  unsigned int v2; // ebx
  _OWORD *v3; // rax
  __int64 v4; // rax
  __int64 v5; // rdi
  void *ptr[2]; // [rsp+0h] [rbp-48h] BYREF
  int v8; // [rsp+10h] [rbp-38h]
  __int128 v9; // [rsp+18h] [rbp-30h]

  v2 = a2;
  v3 = (_OWORD *)sub_186B270(0x40u);
  *v3 = 0;
  v3[1] = 0;
  v3[2] = 0;
  v3[3] = 0;
  ptr[0] = v3;
  ptr[1] = &byte_8;
  v8 = 0;
  v9 = 0;
  sub_157E9E0((int)ptr, a1);
  v4 = v9;
  if ( (_QWORD)v9 )
  {
    if ( a2 >= *(_DWORD *)(v9 - 4) )
    {
      v5 = *((_QWORD *)&v9 + 1);
      v2 = 0;
      if ( *((_QWORD *)&v9 + 1) )
        goto LABEL_4;
LABEL_9:
      sub_186B220((void *)(v4 - 8));
      goto LABEL_5;
    }
    v5 = *((_QWORD *)&v9 + 1);
    LOBYTE(v2) = *(_QWORD *)(v9 + 8LL * a2) != 0;
    if ( !*((_QWORD *)&v9 + 1) )
      goto LABEL_9;
LABEL_4:
    sub_186B220((void *)(v5 - 8));
    v4 = v9;
    if ( !(_QWORD)v9 )
      goto LABEL_5;
    goto LABEL_9;
  }
  v5 = *((_QWORD *)&v9 + 1);
  v2 = 0;
  if ( *((_QWORD *)&v9 + 1) )
    goto LABEL_4;
LABEL_5:
  if ( ptr[0] )
    sub_186B220(ptr[0]);
  return v2;
}

