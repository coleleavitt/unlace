__int64 __fastcall sub_20310A0(__int64 *a1, _QWORD *a2, __int64 a3)
{
  __int64 v6; // rdi
  _BYTE *v7; // rax
  __int64 v8; // rbx
  char *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rdx
  unsigned int v13; // ebx
  int v14; // r14d
  _BYTE *v15; // rax
  __int64 v16; // r12
  __int64 v18; // r12
  size_t v19; // rax
  int v20; // r12d
  __int64 v21; // rdi
  _BYTE *v22; // rax

  v6 = *a1;
  v7 = *(_BYTE **)(v6 + 32);
  if ( (unsigned __int64)v7 >= *(_QWORD *)(v6 + 24) )
  {
    sub_227BA10(v6, 33);
  }
  else
  {
    *(_QWORD *)(v6 + 32) = v7 + 1;
    *v7 = 33;
  }
  v8 = *a1;
  v9 = (char *)sub_20A0E90(a3);
  v11 = v10;
  v12 = v8;
  v13 = 0;
  sub_202FE80(v9, v11, v12);
  sub_995540(*a1, " = !{");
  v14 = sub_20A0E10(a3);
  if ( v14 )
  {
    while ( 1 )
    {
      v15 = (_BYTE *)sub_20A0E20(a3, v13);
      v16 = (__int64)v15;
      if ( *v15 == 7 )
      {
        if ( !(_BYTE)byte_2CFC658 && __cxa_guard_acquire(&byte_2CFC658) )
        {
          qword_2CFC668 = 0;
          qword_2CFC660 = (__int64)off_2BE5D20;
          qword_2CFC670 = 0;
          qword_2CFC678 = 0;
          __cxa_atexit(nullsub_1290, &qword_2CFC660, &off_2B25620);
          __cxa_guard_release(&byte_2CFC658);
        }
        sub_2030E90(*a1, v16);
      }
      else
      {
        v20 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*a2 + 32LL))(*a2, v15);
        if ( v20 == -1 )
        {
          sub_995540(*a1, "<badref>");
        }
        else
        {
          v21 = *a1;
          v22 = *(_BYTE **)(*a1 + 32);
          if ( (unsigned __int64)v22 >= *(_QWORD *)(*a1 + 24) )
          {
            v21 = sub_227BA10(v21, 33);
          }
          else
          {
            *(_QWORD *)(v21 + 32) = v22 + 1;
            *v22 = 33;
          }
          sub_227B930(v21, v20);
        }
      }
      if ( v14 == ++v13 )
        break;
      v18 = *a1;
      v19 = j__strlen(", ");
      sub_9954E0(v18, ", ", v19);
    }
  }
  return sub_995540(*a1, "}\n");
}
