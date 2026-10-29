void __fastcall sub_15BB50(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbp
  _QWORD *v3; // rbx
  _QWORD *v4; // rax
  _QWORD *v5; // rdi
  void (*v6)(void); // rax
  void (__fastcall *v7)(_QWORD); // rdx
  _QWORD *v8; // rax

  if ( a2 )
  {
    if ( *(_QWORD *)(a2 + 16) > 1u )
    {
      v2 = (_QWORD *)(a1 + 40);
      *(_DWORD *)(a2 + 64) = 0;
      *(_QWORD *)(a2 + 16) = 0;
      *(_QWORD *)(a2 + 40) = 0;
      *(_QWORD *)(a2 + 56) = 0;
      v3 = *(_QWORD **)(a1 + 40);
      if ( v3 != (_QWORD *)(a1 + 40) )
      {
        do
        {
          v4 = v3;
          v3 = (_QWORD *)*v3;
          v5 = (_QWORD *)v4[2];
          v6 = *(void (**)(void))(*v5 + 24LL);
          if ( (char *)v6 == (char *)sub_157D60 )
          {
            v7 = (void (__fastcall *)(_QWORD))v5[2];
            v8 = (_QWORD *)(v5[1] + v5[3]);
            if ( ((unsigned __int8)v7 & 1) != 0 )
              v7 = *(void (__fastcall **)(_QWORD))((char *)v7 + *v8 - 1);
            v7(v8);
          }
          else
          {
            v6();
          }
        }
        while ( v2 != v3 );
      }
    }
  }
}

