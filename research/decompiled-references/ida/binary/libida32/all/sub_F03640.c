__int64 __fastcall sub_F03640(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  _DWORD *v3; // rbx
  __int64 result; // rax
  _DWORD *i; // r12
  __int64 v6; // kr00_8
  size_t v7; // rax
  size_t v8; // rax
  size_t v9; // rax
  size_t v10; // rax
  size_t v11; // rax
  size_t v12; // rax

  v3 = *(_DWORD **)(a2 + 48);
  result = *(unsigned int *)(a2 + 40);
  for ( i = &v3[result]; v3 != i; ++v3 )
  {
    v6 = v2;
    v2 = *(_QWORD *)(a1 + 1096);
    switch ( *v3 )
    {
      case 0:
        v8 = j__strlen(" remote_memory");
        result = sub_9717A0(v2, " remote_memory", v8);
        break;
      case 1:
        v11 = j__strlen(" no_remote_memory");
        result = sub_9717A0(v2, " no_remote_memory", v11);
        break;
      case 2:
        v10 = j__strlen(" fine_grained_memory");
        result = sub_9717A0(v2, " fine_grained_memory", v10);
        break;
      case 3:
        v12 = j__strlen(" no_fine_grained_memory");
        result = sub_9717A0(v2, " no_fine_grained_memory", v12);
        break;
      case 4:
        v7 = j__strlen(" ignore_denormal_mode");
        result = sub_9717A0(v2, " ignore_denormal_mode", v7);
        break;
      case 5:
        v9 = j__strlen(" no_ignore_denormal_mode");
        result = sub_9717A0(v2, " no_ignore_denormal_mode", v9);
        break;
      default:
        v2 = v6;
        break;
    }
  }
  return result;
}

