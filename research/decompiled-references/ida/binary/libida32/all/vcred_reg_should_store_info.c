bool vcred_reg_should_store_info()
{
  return (unsigned int)reg_int_op("VaultStoreCredentials", 0, 0, 0) != 0;
}

