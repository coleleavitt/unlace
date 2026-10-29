unsigned __int64 __fastcall sub_1149B0(TDialog **this, int a2, TView *a3)
{
  TView *v3; // rbx
  int v5; // r13d
  TView *v6; // rdx
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  TDialog *v12; // rdi
  void (__fastcall *v13)(TView *, __int64, _QWORD); // r14
  unsigned int v14; // eax

  if ( a3 )
  {
    v3 = (TView *)this;
    if ( a2 == 1 )
    {
      v5 = (_DWORD)this + 264;
      if ( *((_BYTE *)this + 328) )
      {
        if ( !*((_BYTE *)this + 248) )
          goto LABEL_21;
        goto LABEL_20;
      }
      if ( !*(this + 40) )
      {
        if ( *((_BYTE *)this + 248) )
          goto LABEL_20;
        goto LABEL_16;
      }
    }
    else
    {
      v5 = (_DWORD)this + 344;
      if ( *((_BYTE *)this + 408) )
      {
        if ( !*((_BYTE *)this + 248) )
        {
          v12 = *(this + 30);
          if ( v12 )
          {
LABEL_10:
            while ( 1 )
            {
              v13 = *(void (__fastcall **)(TView *, __int64, _QWORD))(*(_QWORD *)a3 + 168LL);
              v14 = TDialog::valid(v12, 0x10u);
              this = (TDialog **)a3;
              v13(a3, 16, v14);
              if ( a2 != 1 )
                break;
              if ( !*((_BYTE *)v3 + 248) )
              {
                v6 = *((TView **)v3 + 30);
                goto LABEL_7;
              }
LABEL_20:
              sub_1145B0();
LABEL_21:
              v6 = *(this + 30);
              v12 = v6;
              if ( !v6 )
                goto LABEL_7;
            }
          }
        }
        goto LABEL_6;
      }
      if ( !*(this + 50) )
      {
        if ( *((_BYTE *)this + 248) )
        {
LABEL_6:
          v6 = nullptr;
LABEL_7:
          TGroup::insertBefore(v3, a3, v6);
          sub_1770B0(v5, (_DWORD)a3, v7, v8, v9, v10);
          return sub_1147A0(v3);
        }
LABEL_16:
        v6 = *(this + 30);
        v12 = v6;
        if ( v6 )
          goto LABEL_10;
        if ( a2 == 1 )
          goto LABEL_7;
        goto LABEL_6;
      }
    }
  }
  if ( under_debugger )
    BUG();
  interr();
  return sub_114B20((TView *)((char *)&stru_A068.st_size + 6));
}

