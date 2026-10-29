__int64 __fastcall sub_122BC0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  int **v4; // r15
  __int64 i; // rbp
  void *v7; // rax
  bool v8; // zf
  unsigned __int64 v9; // r12
  __int64 v10; // rbp
  __int64 v11; // rax
  _QWORD *v12; // rsi
  __int16 v13; // [rsp+10h] [rbp-60h] BYREF
  __int16 v14; // [rsp+12h] [rbp-5Eh] BYREF
  int v15; // [rsp+14h] [rbp-5Ch] BYREF
  void *src; // [rsp+18h] [rbp-58h]
  __int128 v17; // [rsp+20h] [rbp-50h]
  unsigned __int64 v18; // [rsp+30h] [rbp-40h]

  v2 = *(_QWORD *)(a2 + 8);
  v18 = __readfsqword(0x28u);
  v17 = 0;
  src = nullptr;
  if ( !v2 )
    goto LABEL_2;
  v7 = (void *)qvector_reserve();
  v8 = *(_QWORD *)(a2 + 8) == 0;
  src = v7;
  if ( !v8 )
  {
    v9 = 0;
    do
    {
      v10 = getnseg();
      if ( v10 )
      {
        v11 = v17;
        v12 = src;
        if ( *((_QWORD *)&v17 + 1) < (unsigned __int64)(v17 + 1) )
        {
          src = (void *)qvector_reserve();
          v12 = src;
          v11 = v17;
        }
        v12[v11] = v10;
        *(_QWORD *)&v17 = v17 + 1;
      }
      ++v9;
    }
    while ( v9 < *(_QWORD *)(a2 + 8) );
  }
  if ( (_QWORD)v17 )
  {
    v4 = (int **)qalloc_or_throw();
    memcpy(v4, src, 8 * v17);
    v15 = v17;
    if ( (_DWORD)v17 == 1 )
    {
      sub_122A80(*v4);
      goto LABEL_7;
    }
  }
  else
  {
LABEL_2:
    v15 = 0;
    v4 = nullptr;
  }
  v13 = 0;
  v14 = 0;
  while ( (unsigned int)sub_8F730(
                          (__int64)"@0:629[]\n"
                                   "Delete Segment\n"
                                   "CAUTION: ALL INFORMATION ABOUT THE SEGMENT WILL BE LOST!\n"
                                   "Do you really want to delete %D segments?\n"
                                   "<~C~ONFIRM DELETION:C>>\n"
                                   "<~D~isable addresses:C>>",
                          &v15,
                          &v13,
                          &v14) )
  {
    if ( v13 )
    {
      for ( i = 0; v15 > (int)i; ++i )
        del_segm();
      break;
    }
    sub_92120((__int64)"Please check \"CONFIRM DELETION\" checkbox");
  }
LABEL_7:
  if ( v4 )
    qfree();
  sub_1931A0(a1, a2, **(_QWORD **)a2);
  if ( src )
  {
    *(_QWORD *)&v17 = 0;
    qfree();
  }
  return 1;
}

